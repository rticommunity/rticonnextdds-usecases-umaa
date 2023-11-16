

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "ObjectiveType.hpp"
#include "ObjectiveTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

namespace UMAA {

    namespace MM {

        namespace BaseType {

            namespace ObjectiveType_Specializations {

                std::ostream& operator << (std::ostream& o,const ObjectiveType_Selectors& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    switch(sample){
                        case ObjectiveType_Selectors::PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT:
                        o << "ObjectiveType_Selectors::PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT" << " ";
                        break;
                        case ObjectiveType_Selectors::RECOVERYOBJECTIVETYPE_SELECT:
                        o << "ObjectiveType_Selectors::RECOVERYOBJECTIVETYPE_SELECT" << " ";
                        break;
                        case ObjectiveType_Selectors::PRODUCTEXPLOITATIONOBJECTIVETYPE_SELECT:
                        o << "ObjectiveType_Selectors::PRODUCTEXPLOITATIONOBJECTIVETYPE_SELECT" << " ";
                        break;
                        case ObjectiveType_Selectors::COMMSLINKOBJECTIVETYPE_SELECT:
                        o << "ObjectiveType_Selectors::COMMSLINKOBJECTIVETYPE_SELECT" << " ";
                        break;
                        case ObjectiveType_Selectors::DEPLOYMENTOBJECTIVETYPE_SELECT:
                        o << "ObjectiveType_Selectors::DEPLOYMENTOBJECTIVETYPE_SELECT" << " ";
                        break;
                        case ObjectiveType_Selectors::PASSIVELOITEROBJECTIVETYPE_SELECT:
                        o << "ObjectiveType_Selectors::PASSIVELOITEROBJECTIVETYPE_SELECT" << " ";
                        break;
                        case ObjectiveType_Selectors::STATIONKEEPOBJECTIVETYPE_SELECT:
                        o << "ObjectiveType_Selectors::STATIONKEEPOBJECTIVETYPE_SELECT" << " ";
                        break;
                        case ObjectiveType_Selectors::ROUTEOBJECTIVETYPE_SELECT:
                        o << "ObjectiveType_Selectors::ROUTEOBJECTIVETYPE_SELECT" << " ";
                        break;
                        case ObjectiveType_Selectors::CHARGINGOBJECTIVETYPE_SELECT:
                        o << "ObjectiveType_Selectors::CHARGINGOBJECTIVETYPE_SELECT" << " ";
                        break;
                        case ObjectiveType_Selectors::LOITEROBJECTIVETYPE_SELECT:
                        o << "ObjectiveType_Selectors::LOITEROBJECTIVETYPE_SELECT" << " ";
                        break;
                        case ObjectiveType_Selectors::CONTINGENCYOBJECTIVETYPE_SELECT:
                        o << "ObjectiveType_Selectors::CONTINGENCYOBJECTIVETYPE_SELECT" << " ";
                        break;
                    }
                    return o;
                }

                // ---- ObjectiveType_Union: 

                #ifdef RTI_CXX11_RVALUE_REFERENCES
                #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
                ObjectiveType_Union::ObjectiveType_Union(ObjectiveType_Union&& other_) OMG_NOEXCEPT 
                {
                    _d(std::move(other_._d()));
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT):
                            {  
                                ProductDisseminateFileObjectiveType_data( std::move(other_.ProductDisseminateFileObjectiveType_data()));
                        } break;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::RECOVERYOBJECTIVETYPE_SELECT):
                            {  
                                RecoveryObjectiveType_data( std::move(other_.RecoveryObjectiveType_data()));
                        } break;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTEXPLOITATIONOBJECTIVETYPE_SELECT):
                            {  
                                ProductExploitationObjectiveType_data( std::move(other_.ProductExploitationObjectiveType_data()));
                        } break;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::COMMSLINKOBJECTIVETYPE_SELECT):
                            {  
                                CommsLinkObjectiveType_data( std::move(other_.CommsLinkObjectiveType_data()));
                        } break;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::DEPLOYMENTOBJECTIVETYPE_SELECT):
                            {  
                                DeploymentObjectiveType_data( std::move(other_.DeploymentObjectiveType_data()));
                        } break;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PASSIVELOITEROBJECTIVETYPE_SELECT):
                            {  
                                PassiveLoiterObjectiveType_data( std::move(other_.PassiveLoiterObjectiveType_data()));
                        } break;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::STATIONKEEPOBJECTIVETYPE_SELECT):
                            {  
                                StationkeepObjectiveType_data( std::move(other_.StationkeepObjectiveType_data()));
                        } break;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::ROUTEOBJECTIVETYPE_SELECT):
                            {  
                                RouteObjectiveType_data( std::move(other_.RouteObjectiveType_data()));
                        } break;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CHARGINGOBJECTIVETYPE_SELECT):
                            {  
                                ChargingObjectiveType_data( std::move(other_.ChargingObjectiveType_data()));
                        } break;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::LOITEROBJECTIVETYPE_SELECT):
                            {  
                                LoiterObjectiveType_data( std::move(other_.LoiterObjectiveType_data()));
                        } break;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CONTINGENCYOBJECTIVETYPE_SELECT):
                            {  
                                ContingencyObjectiveType_data( std::move(other_.ContingencyObjectiveType_data()));
                        } break;

                        default: 
                        {
                            /* 
                            * Prevents compiler warnings when discriminator is an enum
                            * and unionType does not specify all enumeration members.
                            */ 
                        }
                    }
                }

                ObjectiveType_Union& ObjectiveType_Union::operator=(ObjectiveType_Union&&  other_) OMG_NOEXCEPT {
                    ObjectiveType_Union tmp(std::move(other_));
                    swap(tmp); 
                    return *this;
                }
                #endif
                #endif 

                ObjectiveType_Union::Union_::Union_()  {
                }

                ObjectiveType_Union::Union_::Union_(const UMAA::MM::BaseType::ProductDisseminateFileObjectiveType& ProductDisseminateFileObjectiveType_data,const UMAA::MM::BaseType::RecoveryObjectiveType& RecoveryObjectiveType_data,const UMAA::MM::BaseType::ProductExploitationObjectiveType& ProductExploitationObjectiveType_data,const UMAA::MM::BaseType::CommsLinkObjectiveType& CommsLinkObjectiveType_data,const UMAA::MM::BaseType::DeploymentObjectiveType& DeploymentObjectiveType_data,const UMAA::MM::BaseType::PassiveLoiterObjectiveType& PassiveLoiterObjectiveType_data,const UMAA::MM::BaseType::StationkeepObjectiveType& StationkeepObjectiveType_data,const UMAA::MM::BaseType::RouteObjectiveType& RouteObjectiveType_data,const UMAA::MM::BaseType::ChargingObjectiveType& ChargingObjectiveType_data,const UMAA::MM::BaseType::LoiterObjectiveType& LoiterObjectiveType_data,const UMAA::MM::BaseType::ContingencyObjectiveType& ContingencyObjectiveType_data):
                    m_ProductDisseminateFileObjectiveType_data_( ProductDisseminateFileObjectiveType_data ),
                    m_RecoveryObjectiveType_data_( RecoveryObjectiveType_data ),
                    m_ProductExploitationObjectiveType_data_( ProductExploitationObjectiveType_data ),
                    m_CommsLinkObjectiveType_data_( CommsLinkObjectiveType_data ),
                    m_DeploymentObjectiveType_data_( DeploymentObjectiveType_data ),
                    m_PassiveLoiterObjectiveType_data_( PassiveLoiterObjectiveType_data ),
                    m_StationkeepObjectiveType_data_( StationkeepObjectiveType_data ),
                    m_RouteObjectiveType_data_( RouteObjectiveType_data ),
                    m_ChargingObjectiveType_data_( ChargingObjectiveType_data ),
                    m_LoiterObjectiveType_data_( LoiterObjectiveType_data ),
                    m_ContingencyObjectiveType_data_( ContingencyObjectiveType_data ) {
                }

                ObjectiveType_Union::ObjectiveType_Union() :m_d_(default_discriminator())
                {
                }

                void ObjectiveType_Union::swap(ObjectiveType_Union& other_)  OMG_NOEXCEPT 
                {
                    using std::swap;
                    swap (m_d_,other_.m_d_);
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT):
                            {  
                                swap(m_u_.m_ProductDisseminateFileObjectiveType_data_, other_.m_u_.m_ProductDisseminateFileObjectiveType_data_);
                        } break;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::RECOVERYOBJECTIVETYPE_SELECT):
                            {  
                                swap(m_u_.m_RecoveryObjectiveType_data_, other_.m_u_.m_RecoveryObjectiveType_data_);
                        } break;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTEXPLOITATIONOBJECTIVETYPE_SELECT):
                            {  
                                swap(m_u_.m_ProductExploitationObjectiveType_data_, other_.m_u_.m_ProductExploitationObjectiveType_data_);
                        } break;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::COMMSLINKOBJECTIVETYPE_SELECT):
                            {  
                                swap(m_u_.m_CommsLinkObjectiveType_data_, other_.m_u_.m_CommsLinkObjectiveType_data_);
                        } break;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::DEPLOYMENTOBJECTIVETYPE_SELECT):
                            {  
                                swap(m_u_.m_DeploymentObjectiveType_data_, other_.m_u_.m_DeploymentObjectiveType_data_);
                        } break;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PASSIVELOITEROBJECTIVETYPE_SELECT):
                            {  
                                swap(m_u_.m_PassiveLoiterObjectiveType_data_, other_.m_u_.m_PassiveLoiterObjectiveType_data_);
                        } break;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::STATIONKEEPOBJECTIVETYPE_SELECT):
                            {  
                                swap(m_u_.m_StationkeepObjectiveType_data_, other_.m_u_.m_StationkeepObjectiveType_data_);
                        } break;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::ROUTEOBJECTIVETYPE_SELECT):
                            {  
                                swap(m_u_.m_RouteObjectiveType_data_, other_.m_u_.m_RouteObjectiveType_data_);
                        } break;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CHARGINGOBJECTIVETYPE_SELECT):
                            {  
                                swap(m_u_.m_ChargingObjectiveType_data_, other_.m_u_.m_ChargingObjectiveType_data_);
                        } break;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::LOITEROBJECTIVETYPE_SELECT):
                            {  
                                swap(m_u_.m_LoiterObjectiveType_data_, other_.m_u_.m_LoiterObjectiveType_data_);
                        } break;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CONTINGENCYOBJECTIVETYPE_SELECT):
                            {  
                                swap(m_u_.m_ContingencyObjectiveType_data_, other_.m_u_.m_ContingencyObjectiveType_data_);
                        } break;

                        default: 
                        {
                            /* 
                            * Prevents compiler warnings when discriminator is an enum
                            * and unionType does not specify all enumeration members.
                            */ 
                        }
                    }
                    if (_d() != other_._d()){
                        switch(::rti::topic::cdr::integer_case(other_._d())){
                            case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT):
                                {  
                                    swap(m_u_.m_ProductDisseminateFileObjectiveType_data_, other_.m_u_.m_ProductDisseminateFileObjectiveType_data_);
                            } break;
                            case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::RECOVERYOBJECTIVETYPE_SELECT):
                                {  
                                    swap(m_u_.m_RecoveryObjectiveType_data_, other_.m_u_.m_RecoveryObjectiveType_data_);
                            } break;
                            case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTEXPLOITATIONOBJECTIVETYPE_SELECT):
                                {  
                                    swap(m_u_.m_ProductExploitationObjectiveType_data_, other_.m_u_.m_ProductExploitationObjectiveType_data_);
                            } break;
                            case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::COMMSLINKOBJECTIVETYPE_SELECT):
                                {  
                                    swap(m_u_.m_CommsLinkObjectiveType_data_, other_.m_u_.m_CommsLinkObjectiveType_data_);
                            } break;
                            case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::DEPLOYMENTOBJECTIVETYPE_SELECT):
                                {  
                                    swap(m_u_.m_DeploymentObjectiveType_data_, other_.m_u_.m_DeploymentObjectiveType_data_);
                            } break;
                            case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PASSIVELOITEROBJECTIVETYPE_SELECT):
                                {  
                                    swap(m_u_.m_PassiveLoiterObjectiveType_data_, other_.m_u_.m_PassiveLoiterObjectiveType_data_);
                            } break;
                            case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::STATIONKEEPOBJECTIVETYPE_SELECT):
                                {  
                                    swap(m_u_.m_StationkeepObjectiveType_data_, other_.m_u_.m_StationkeepObjectiveType_data_);
                            } break;
                            case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::ROUTEOBJECTIVETYPE_SELECT):
                                {  
                                    swap(m_u_.m_RouteObjectiveType_data_, other_.m_u_.m_RouteObjectiveType_data_);
                            } break;
                            case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CHARGINGOBJECTIVETYPE_SELECT):
                                {  
                                    swap(m_u_.m_ChargingObjectiveType_data_, other_.m_u_.m_ChargingObjectiveType_data_);
                            } break;
                            case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::LOITEROBJECTIVETYPE_SELECT):
                                {  
                                    swap(m_u_.m_LoiterObjectiveType_data_, other_.m_u_.m_LoiterObjectiveType_data_);
                            } break;
                            case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CONTINGENCYOBJECTIVETYPE_SELECT):
                                {  
                                    swap(m_u_.m_ContingencyObjectiveType_data_, other_.m_u_.m_ContingencyObjectiveType_data_);
                            } break;

                            default: 
                            {
                                /* 
                                * Prevents compiler warnings when discriminator is an enum
                                * and unionType does not specify all enumeration members.
                                */ 
                            }
                        }
                    }
                }  

                bool ObjectiveType_Union::operator == (const ObjectiveType_Union& other_) const {
                    if (_d() != other_._d()){
                        return false;
                    }
                    switch(::rti::topic::cdr::integer_case(_d())){
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT):
                            {  
                                if ( m_u_.m_ProductDisseminateFileObjectiveType_data_ != other_.m_u_.m_ProductDisseminateFileObjectiveType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::RECOVERYOBJECTIVETYPE_SELECT):
                            {  
                                if ( m_u_.m_RecoveryObjectiveType_data_ != other_.m_u_.m_RecoveryObjectiveType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTEXPLOITATIONOBJECTIVETYPE_SELECT):
                            {  
                                if ( m_u_.m_ProductExploitationObjectiveType_data_ != other_.m_u_.m_ProductExploitationObjectiveType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::COMMSLINKOBJECTIVETYPE_SELECT):
                            {  
                                if ( m_u_.m_CommsLinkObjectiveType_data_ != other_.m_u_.m_CommsLinkObjectiveType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::DEPLOYMENTOBJECTIVETYPE_SELECT):
                            {  
                                if ( m_u_.m_DeploymentObjectiveType_data_ != other_.m_u_.m_DeploymentObjectiveType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PASSIVELOITEROBJECTIVETYPE_SELECT):
                            {  
                                if ( m_u_.m_PassiveLoiterObjectiveType_data_ != other_.m_u_.m_PassiveLoiterObjectiveType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::STATIONKEEPOBJECTIVETYPE_SELECT):
                            {  
                                if ( m_u_.m_StationkeepObjectiveType_data_ != other_.m_u_.m_StationkeepObjectiveType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::ROUTEOBJECTIVETYPE_SELECT):
                            {  
                                if ( m_u_.m_RouteObjectiveType_data_ != other_.m_u_.m_RouteObjectiveType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CHARGINGOBJECTIVETYPE_SELECT):
                            {  
                                if ( m_u_.m_ChargingObjectiveType_data_ != other_.m_u_.m_ChargingObjectiveType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::LOITEROBJECTIVETYPE_SELECT):
                            {  
                                if ( m_u_.m_LoiterObjectiveType_data_ != other_.m_u_.m_LoiterObjectiveType_data_) {
                                    return false;
                            }
                        } break ;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CONTINGENCYOBJECTIVETYPE_SELECT):
                            {  
                                if ( m_u_.m_ContingencyObjectiveType_data_ != other_.m_u_.m_ContingencyObjectiveType_data_) {
                                    return false;
                            }
                        } break ;
                        default: 
                        {
                            /* 
                            * Prevents compiler warnings when discriminator is an enum
                            * and unionType does not specify all enumeration members.
                            */ 
                        }
                    }
                    return true;
                }
                bool ObjectiveType_Union::operator != (const ObjectiveType_Union& other_) const {
                    return !this->operator ==(other_);
                }

                std::ostream& operator << (std::ostream& o,const ObjectiveType_Union& sample)
                {
                    ::rti::util::StreamFlagSaver flag_saver (o);
                    o <<"[";
                    o << "_d: " << sample._d() <<", ";
                    switch(::rti::topic::cdr::integer_case(sample._d())){
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT):
                            {  
                                o << "ProductDisseminateFileObjectiveType_data: " << sample.ProductDisseminateFileObjectiveType_data()<<", ";
                        } break ;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::RECOVERYOBJECTIVETYPE_SELECT):
                            {  
                                o << "RecoveryObjectiveType_data: " << sample.RecoveryObjectiveType_data()<<", ";
                        } break ;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTEXPLOITATIONOBJECTIVETYPE_SELECT):
                            {  
                                o << "ProductExploitationObjectiveType_data: " << sample.ProductExploitationObjectiveType_data()<<", ";
                        } break ;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::COMMSLINKOBJECTIVETYPE_SELECT):
                            {  
                                o << "CommsLinkObjectiveType_data: " << sample.CommsLinkObjectiveType_data()<<", ";
                        } break ;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::DEPLOYMENTOBJECTIVETYPE_SELECT):
                            {  
                                o << "DeploymentObjectiveType_data: " << sample.DeploymentObjectiveType_data()<<", ";
                        } break ;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PASSIVELOITEROBJECTIVETYPE_SELECT):
                            {  
                                o << "PassiveLoiterObjectiveType_data: " << sample.PassiveLoiterObjectiveType_data()<<", ";
                        } break ;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::STATIONKEEPOBJECTIVETYPE_SELECT):
                            {  
                                o << "StationkeepObjectiveType_data: " << sample.StationkeepObjectiveType_data()<<", ";
                        } break ;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::ROUTEOBJECTIVETYPE_SELECT):
                            {  
                                o << "RouteObjectiveType_data: " << sample.RouteObjectiveType_data()<<", ";
                        } break ;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CHARGINGOBJECTIVETYPE_SELECT):
                            {  
                                o << "ChargingObjectiveType_data: " << sample.ChargingObjectiveType_data()<<", ";
                        } break ;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::LOITEROBJECTIVETYPE_SELECT):
                            {  
                                o << "LoiterObjectiveType_data: " << sample.LoiterObjectiveType_data()<<", ";
                        } break ;
                        case (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CONTINGENCYOBJECTIVETYPE_SELECT):
                            {  
                                o << "ContingencyObjectiveType_data: " << sample.ContingencyObjectiveType_data() ;        } break ;

                        default: 
                        {
                            /* 
                            * Prevents compiler warnings when discriminator is an enum
                            * and unionType does not specify all enumeration members.
                            */ 
                        }
                    }
                    o <<"]";
                    return o;
                }

                UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors ObjectiveType_Union::default_discriminator() {
                    return UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors(static_cast< UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors >(0));
                }  

            } // namespace ObjectiveType_Specializations  

            // ---- ObjectiveType: 

            ObjectiveType::ObjectiveType() :
                m_approvalRequired_ (0) ,
                m_name_ ("") ,
                m_priority_ (0)  {
                    ::rti::core::fill_array( 
                        m_objectiveID_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
                    ::rti::core::fill_array( 
                        m_parentObjectiveID_, 
                        ::rti::topic::cdr::alias_helper< UMAA::Common::Measurement::NumericGUID::value_type >::default_value());
            }   

            ObjectiveType::ObjectiveType (bool approvalRequired,const ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& childObjectiveIDs,const ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& dependentObjectiveIDs,const UMAA::Common::Measurement::DateTime& endTime,const ::dds::core::optional< UMAA::Common::Measurement::DateTime_Tolerance >& endTimeTolerance,const std::string& name,const ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L >& preferredResourceIDs,int32_t priority,const UMAA::Common::Measurement::DateTime& startTime,const ::dds::core::optional< UMAA::Common::Measurement::DateTime_Tolerance >& startTimeTolerance,const UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union& ObjectiveType_subtypes,const UMAA::Common::Measurement::NumericGUID& objectiveID,const UMAA::Common::Measurement::NumericGUID& parentObjectiveID):
                m_approvalRequired_( approvalRequired ),
                m_childObjectiveIDs_( childObjectiveIDs ),
                m_dependentObjectiveIDs_( dependentObjectiveIDs ),
                m_endTime_( endTime ),
                m_endTimeTolerance_( endTimeTolerance ),
                m_name_( name ),
                m_preferredResourceIDs_( preferredResourceIDs ),
                m_priority_( priority ),
                m_startTime_( startTime ),
                m_startTimeTolerance_( startTimeTolerance ),
                m_ObjectiveType_subtypes_( ObjectiveType_subtypes ),
                m_objectiveID_( objectiveID ),
                m_parentObjectiveID_( parentObjectiveID ) {
            }

            #ifdef RTI_CXX11_RVALUE_REFERENCES
            #ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
            ObjectiveType::ObjectiveType(ObjectiveType&& other_) OMG_NOEXCEPT  :m_approvalRequired_ (std::move(other_.m_approvalRequired_))
            ,
            m_childObjectiveIDs_ (std::move(other_.m_childObjectiveIDs_))
            ,
            m_dependentObjectiveIDs_ (std::move(other_.m_dependentObjectiveIDs_))
            ,
            m_endTime_ (std::move(other_.m_endTime_))
            ,
            m_endTimeTolerance_ (std::move(other_.m_endTimeTolerance_))
            ,
            m_name_ (std::move(other_.m_name_))
            ,
            m_preferredResourceIDs_ (std::move(other_.m_preferredResourceIDs_))
            ,
            m_priority_ (std::move(other_.m_priority_))
            ,
            m_startTime_ (std::move(other_.m_startTime_))
            ,
            m_startTimeTolerance_ (std::move(other_.m_startTimeTolerance_))
            ,
            m_ObjectiveType_subtypes_ (std::move(other_.m_ObjectiveType_subtypes_))
            ,
            m_objectiveID_ (std::move(other_.m_objectiveID_))
            ,
            m_parentObjectiveID_ (std::move(other_.m_parentObjectiveID_))
            {
            } 

            ObjectiveType& ObjectiveType::operator=(ObjectiveType&&  other_) OMG_NOEXCEPT {
                ObjectiveType tmp(std::move(other_));
                swap(tmp); 
                return *this;
            }
            #endif
            #endif   

            void ObjectiveType::swap(ObjectiveType& other_)  OMG_NOEXCEPT 
            {
                using std::swap;
                swap(m_approvalRequired_, other_.m_approvalRequired_);
                swap(m_childObjectiveIDs_, other_.m_childObjectiveIDs_);
                swap(m_dependentObjectiveIDs_, other_.m_dependentObjectiveIDs_);
                swap(m_endTime_, other_.m_endTime_);
                swap(m_endTimeTolerance_, other_.m_endTimeTolerance_);
                swap(m_name_, other_.m_name_);
                swap(m_preferredResourceIDs_, other_.m_preferredResourceIDs_);
                swap(m_priority_, other_.m_priority_);
                swap(m_startTime_, other_.m_startTime_);
                swap(m_startTimeTolerance_, other_.m_startTimeTolerance_);
                swap(m_ObjectiveType_subtypes_, other_.m_ObjectiveType_subtypes_);
                swap(m_objectiveID_, other_.m_objectiveID_);
                swap(m_parentObjectiveID_, other_.m_parentObjectiveID_);
            }  

            bool ObjectiveType::operator == (const ObjectiveType& other_) const {
                if (m_approvalRequired_ != other_.m_approvalRequired_) {
                    return false;
                }
                if (m_childObjectiveIDs_ != other_.m_childObjectiveIDs_) {
                    return false;
                }
                if (m_dependentObjectiveIDs_ != other_.m_dependentObjectiveIDs_) {
                    return false;
                }
                if (m_endTime_ != other_.m_endTime_) {
                    return false;
                }
                if (m_endTimeTolerance_ != other_.m_endTimeTolerance_) {
                    return false;
                }
                if (m_name_ != other_.m_name_) {
                    return false;
                }
                if (m_preferredResourceIDs_ != other_.m_preferredResourceIDs_) {
                    return false;
                }
                if (m_priority_ != other_.m_priority_) {
                    return false;
                }
                if (m_startTime_ != other_.m_startTime_) {
                    return false;
                }
                if (m_startTimeTolerance_ != other_.m_startTimeTolerance_) {
                    return false;
                }
                if (m_ObjectiveType_subtypes_ != other_.m_ObjectiveType_subtypes_) {
                    return false;
                }
                if (m_objectiveID_ != other_.m_objectiveID_) {
                    return false;
                }
                if (m_parentObjectiveID_ != other_.m_parentObjectiveID_) {
                    return false;
                }
                return true;
            }
            bool ObjectiveType::operator != (const ObjectiveType& other_) const {
                return !this->operator ==(other_);
            }

            std::ostream& operator << (std::ostream& o,const ObjectiveType& sample)
            {
                ::rti::util::StreamFlagSaver flag_saver (o);
                o <<"[";
                o << "approvalRequired: " << sample.approvalRequired()<<", ";
                o << "childObjectiveIDs: " << sample.childObjectiveIDs()<<", ";
                o << "dependentObjectiveIDs: " << sample.dependentObjectiveIDs()<<", ";
                o << "endTime: " << sample.endTime()<<", ";
                o << "endTimeTolerance: " << sample.endTimeTolerance()<<", ";
                o << "name: " << sample.name()<<", ";
                o << "preferredResourceIDs: " << sample.preferredResourceIDs()<<", ";
                o << "priority: " << sample.priority()<<", ";
                o << "startTime: " << sample.startTime()<<", ";
                o << "startTimeTolerance: " << sample.startTimeTolerance()<<", ";
                o << "ObjectiveType_subtypes: " << sample.ObjectiveType_subtypes()<<", ";
                o << "objectiveID: " << sample.objectiveID()<<", ";
                o << "parentObjectiveID: " << sample.parentObjectiveID() ;
                o <<"]";
                return o;
            }

        } // namespace BaseType  

    } // namespace MM  

} // namespace UMAA  

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        const UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors default_enumerator<UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors>::value = UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT;
        template<>
        struct native_type_code< UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ObjectiveType_Selectors_g_tc_members[11]=
                {

                    {
                        (char *)"PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RECOVERYOBJECTIVETYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::RECOVERYOBJECTIVETYPE_SELECT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PRODUCTEXPLOITATIONOBJECTIVETYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTEXPLOITATIONOBJECTIVETYPE_SELECT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"COMMSLINKOBJECTIVETYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::COMMSLINKOBJECTIVETYPE_SELECT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DEPLOYMENTOBJECTIVETYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::DEPLOYMENTOBJECTIVETYPE_SELECT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PASSIVELOITEROBJECTIVETYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PASSIVELOITEROBJECTIVETYPE_SELECT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"STATIONKEEPOBJECTIVETYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::STATIONKEEPOBJECTIVETYPE_SELECT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ROUTEOBJECTIVETYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::ROUTEOBJECTIVETYPE_SELECT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"CHARGINGOBJECTIVETYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CHARGINGOBJECTIVETYPE_SELECT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LOITEROBJECTIVETYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::LOITEROBJECTIVETYPE_SELECT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"CONTINGENCYOBJECTIVETYPE_SELECT",/* Member name */
                        {
                            0, /* Ignored */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        static_cast<int>(UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CONTINGENCYOBJECTIVETYPE_SELECT), 
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PRIVATE_MEMBER,/* Member visibility */ 

                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ObjectiveType_Selectors_g_tc =
                {{
                        DDS_TK_ENUM, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        11, /* Number of members */
                        ObjectiveType_Selectors_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ObjectiveType_Selectors*/

                if (is_initialized) {
                    return &ObjectiveType_Selectors_g_tc;
                }

                ObjectiveType_Selectors_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                /* Initialize the values for annotations. */
                ObjectiveType_Selectors_g_tc._data._annotations._defaultValue._d = RTI_XCDR_TK_ENUM;
                ObjectiveType_Selectors_g_tc._data._annotations._defaultValue._u.long_value = 0;

                ObjectiveType_Selectors_g_tc._data._sampleAccessInfo = sample_access_info();
                ObjectiveType_Selectors_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ObjectiveType_Selectors_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static RTIXCdrMemberAccessInfo ObjectiveType_Selectors_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ObjectiveType_Selectors_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ObjectiveType_Selectors_g_sampleAccessInfo;
                }

                ObjectiveType_Selectors_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 0;

                ObjectiveType_Selectors_g_sampleAccessInfo.memberAccessInfos = 
                ObjectiveType_Selectors_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ObjectiveType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ObjectiveType_Selectors_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ObjectiveType_Selectors_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ObjectiveType_Selectors_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors >;

                ObjectiveType_Selectors_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ObjectiveType_Selectors_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ObjectiveType_Selectors_g_typePlugin = 
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

                return &ObjectiveType_Selectors_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::EnumType& dynamic_type< UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors >::get()
        {
            return static_cast<const ::dds::core::xtypes::EnumType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member ObjectiveType_Union_g_tc_members[11]=
                {

                    {
                        (char *)"ProductDisseminateFileObjectiveType_data",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RecoveryObjectiveType_data",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::RECOVERYOBJECTIVETYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ProductExploitationObjectiveType_data",/* Member name */
                        {
                            3,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTEXPLOITATIONOBJECTIVETYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"CommsLinkObjectiveType_data",/* Member name */
                        {
                            4,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::COMMSLINKOBJECTIVETYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"DeploymentObjectiveType_data",/* Member name */
                        {
                            5,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::DEPLOYMENTOBJECTIVETYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"PassiveLoiterObjectiveType_data",/* Member name */
                        {
                            6,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PASSIVELOITEROBJECTIVETYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"StationkeepObjectiveType_data",/* Member name */
                        {
                            7,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::STATIONKEEPOBJECTIVETYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"RouteObjectiveType_data",/* Member name */
                        {
                            8,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::ROUTEOBJECTIVETYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ChargingObjectiveType_data",/* Member name */
                        {
                            9,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CHARGINGOBJECTIVETYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"LoiterObjectiveType_data",/* Member name */
                        {
                            10,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::LOITEROBJECTIVETYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"ContingencyObjectiveType_data",/* Member name */
                        {
                            11,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        1, /* Number of labels */
                        static_cast<int>((UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CONTINGENCYOBJECTIVETYPE_SELECT)),
                        NULL, /* Labels (it is NULL when there is only one label)*/
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ObjectiveType_Union_g_tc =
                {{
                        DDS_TK_UNION, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union", /* Name */
                        NULL,     /* Base class type code is assigned later */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        11, /* Number of members */
                        ObjectiveType_Union_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Type Modifier */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ObjectiveType_Union*/

                if (is_initialized) {
                    return &ObjectiveType_Union_g_tc;
                }

                ObjectiveType_Union_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ObjectiveType_Union_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MM::BaseType::ProductDisseminateFileObjectiveType>::get().native();
                ObjectiveType_Union_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MM::BaseType::RecoveryObjectiveType>::get().native();
                ObjectiveType_Union_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MM::BaseType::ProductExploitationObjectiveType>::get().native();
                ObjectiveType_Union_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MM::BaseType::CommsLinkObjectiveType>::get().native();
                ObjectiveType_Union_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MM::BaseType::DeploymentObjectiveType>::get().native();
                ObjectiveType_Union_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MM::BaseType::PassiveLoiterObjectiveType>::get().native();
                ObjectiveType_Union_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MM::BaseType::StationkeepObjectiveType>::get().native();
                ObjectiveType_Union_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MM::BaseType::RouteObjectiveType>::get().native();
                ObjectiveType_Union_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MM::BaseType::ChargingObjectiveType>::get().native();
                ObjectiveType_Union_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MM::BaseType::LoiterObjectiveType>::get().native();
                ObjectiveType_Union_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MM::BaseType::ContingencyObjectiveType>::get().native();

                /* Initialize the values for member annotations. */

                /* Discriminator type code */
                ObjectiveType_Union_g_tc._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors>::get().native();

                ObjectiveType_Union_g_tc._data._sampleAccessInfo = sample_access_info();
                ObjectiveType_Union_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ObjectiveType_Union_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union *sample;

                static RTIXCdrMemberAccessInfo ObjectiveType_Union_g_memberAccessInfos[12] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ObjectiveType_Union_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ObjectiveType_Union_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union);
                if (sample == NULL) {
                    return NULL;
                }

                ObjectiveType_Union_g_memberAccessInfos[0].bindingMemberValueOffset[0] =
                (RTIXCdrUnsignedLong) ((char *)&sample->_d() - (char *)sample);

                sample->_d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT);
                ObjectiveType_Union_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ProductDisseminateFileObjectiveType_data() - (char *)sample);

                sample->_d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::RECOVERYOBJECTIVETYPE_SELECT);
                ObjectiveType_Union_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RecoveryObjectiveType_data() - (char *)sample);

                sample->_d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTEXPLOITATIONOBJECTIVETYPE_SELECT);
                ObjectiveType_Union_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ProductExploitationObjectiveType_data() - (char *)sample);

                sample->_d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::COMMSLINKOBJECTIVETYPE_SELECT);
                ObjectiveType_Union_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->CommsLinkObjectiveType_data() - (char *)sample);

                sample->_d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::DEPLOYMENTOBJECTIVETYPE_SELECT);
                ObjectiveType_Union_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->DeploymentObjectiveType_data() - (char *)sample);

                sample->_d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PASSIVELOITEROBJECTIVETYPE_SELECT);
                ObjectiveType_Union_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->PassiveLoiterObjectiveType_data() - (char *)sample);

                sample->_d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::STATIONKEEPOBJECTIVETYPE_SELECT);
                ObjectiveType_Union_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->StationkeepObjectiveType_data() - (char *)sample);

                sample->_d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::ROUTEOBJECTIVETYPE_SELECT);
                ObjectiveType_Union_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->RouteObjectiveType_data() - (char *)sample);

                sample->_d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CHARGINGOBJECTIVETYPE_SELECT);
                ObjectiveType_Union_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ChargingObjectiveType_data() - (char *)sample);

                sample->_d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::LOITEROBJECTIVETYPE_SELECT);
                ObjectiveType_Union_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->LoiterObjectiveType_data() - (char *)sample);

                sample->_d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CONTINGENCYOBJECTIVETYPE_SELECT);
                ObjectiveType_Union_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ContingencyObjectiveType_data() - (char *)sample);

                ObjectiveType_Union_g_sampleAccessInfo.memberAccessInfos = 
                ObjectiveType_Union_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ObjectiveType_Union_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ObjectiveType_Union_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ObjectiveType_Union_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ObjectiveType_Union_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union >;

                ObjectiveType_Union_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ObjectiveType_Union_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ObjectiveType_Union_g_typePlugin = 
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

                return &ObjectiveType_Union_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::UnionType& dynamic_type< UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union >::get()
        {
            return static_cast<const ::dds::core::xtypes::UnionType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< UMAA::MM::BaseType::ObjectiveType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ObjectiveType_g_tc_childObjectiveIDs_sequence;
                static DDS_TypeCode ObjectiveType_g_tc_dependentObjectiveIDs_sequence;
                static DDS_TypeCode ObjectiveType_g_tc_preferredResourceIDs_sequence;

                static DDS_TypeCode_Member ObjectiveType_g_tc_members[13]=
                {

                    {
                        (char *)"approvalRequired",/* Member name */
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
                        (char *)"childObjectiveIDs",/* Member name */
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
                        (char *)"dependentObjectiveIDs",/* Member name */
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
                        (char *)"endTime",/* Member name */
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
                        (char *)"endTimeTolerance",/* Member name */
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
                        (char *)"name",/* Member name */
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
                        (char *)"preferredResourceIDs",/* Member name */
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
                        (char *)"priority",/* Member name */
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
                        (char *)"startTime",/* Member name */
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
                        (char *)"startTimeTolerance",/* Member name */
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
                        (char *)"ObjectiveType_subtypes",/* Member name */
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
                        (char *)"objectiveID",/* Member name */
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
                        (char *)"parentObjectiveID",/* Member name */
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
                        RTI_CDR_KEY_MEMBER , /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode ObjectiveType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"UMAA::MM::BaseType::ObjectiveType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        13, /* Number of members */
                        ObjectiveType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for ObjectiveType*/

                if (is_initialized) {
                    return &ObjectiveType_g_tc;
                }

                ObjectiveType_g_tc_childObjectiveIDs_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L > >((100L));
                ObjectiveType_g_tc_dependentObjectiveIDs_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L > >((100L));
                ObjectiveType_g_tc_preferredResourceIDs_sequence = initialize_sequence_typecode< ::rti::core::bounded_sequence< UMAA::Common::Measurement::NumericGUID, 100L > >((100L));

                ObjectiveType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                ObjectiveType_g_tc_childObjectiveIDs_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ObjectiveType_g_tc_dependentObjectiveIDs_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ObjectiveType_g_tc_preferredResourceIDs_sequence._data._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ObjectiveType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                ObjectiveType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& ObjectiveType_g_tc_childObjectiveIDs_sequence;
                ObjectiveType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& ObjectiveType_g_tc_dependentObjectiveIDs_sequence;
                ObjectiveType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                ObjectiveType_g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime_Tolerance>::get().native();
                ObjectiveType_g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::PrimitiveConstrained::StringShortDescription_AliasTag_t>::get().native();
                ObjectiveType_g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)& ObjectiveType_g_tc_preferredResourceIDs_sequence;
                ObjectiveType_g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::Order_AliasTag_t>::get().native();
                ObjectiveType_g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime>::get().native();
                ObjectiveType_g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::DateTime_Tolerance>::get().native();
                ObjectiveType_g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union>::get().native();
                ObjectiveType_g_tc_members[11]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();
                ObjectiveType_g_tc_members[12]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::dynamic_type< UMAA::Common::Measurement::NumericGUID_AliasTag_t>::get().native();

                /* Initialize the values for member annotations. */
                ObjectiveType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                ObjectiveType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;

                ObjectiveType_g_tc_members[5]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                ObjectiveType_g_tc_members[5]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                ObjectiveType_g_tc_members[7]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
                ObjectiveType_g_tc_members[7]._annotations._defaultValue._u.long_value = 0;
                ObjectiveType_g_tc_members[7]._annotations._minValue._d = RTI_XCDR_TK_LONG;
                ObjectiveType_g_tc_members[7]._annotations._minValue._u.long_value = 0L;
                ObjectiveType_g_tc_members[7]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
                ObjectiveType_g_tc_members[7]._annotations._maxValue._u.long_value = 2147483647L;

                ObjectiveType_g_tc._data._sampleAccessInfo = sample_access_info();
                ObjectiveType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &ObjectiveType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                UMAA::MM::BaseType::ObjectiveType *sample;

                static RTIXCdrMemberAccessInfo ObjectiveType_g_memberAccessInfos[13] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo ObjectiveType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &ObjectiveType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    UMAA::MM::BaseType::ObjectiveType);
                if (sample == NULL) {
                    return NULL;
                }

                ObjectiveType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->approvalRequired() - (char *)sample);

                ObjectiveType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->childObjectiveIDs() - (char *)sample);

                ObjectiveType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->dependentObjectiveIDs() - (char *)sample);

                ObjectiveType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->endTime() - (char *)sample);

                ObjectiveType_g_memberAccessInfos[4].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->endTimeTolerance() - (char *)sample);

                ObjectiveType_g_memberAccessInfos[5].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->name() - (char *)sample);

                ObjectiveType_g_memberAccessInfos[6].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->preferredResourceIDs() - (char *)sample);

                ObjectiveType_g_memberAccessInfos[7].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->priority() - (char *)sample);

                ObjectiveType_g_memberAccessInfos[8].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->startTime() - (char *)sample);

                ObjectiveType_g_memberAccessInfos[9].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->startTimeTolerance() - (char *)sample);

                ObjectiveType_g_memberAccessInfos[10].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->ObjectiveType_subtypes() - (char *)sample);

                ObjectiveType_g_memberAccessInfos[11].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->objectiveID() - (char *)sample);

                ObjectiveType_g_memberAccessInfos[12].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->parentObjectiveID() - (char *)sample);

                ObjectiveType_g_sampleAccessInfo.memberAccessInfos = 
                ObjectiveType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(UMAA::MM::BaseType::ObjectiveType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        ObjectiveType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        ObjectiveType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                ObjectiveType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                ObjectiveType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< UMAA::MM::BaseType::ObjectiveType >;

                ObjectiveType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &ObjectiveType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin ObjectiveType_g_typePlugin = 
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

                return &ObjectiveType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< UMAA::MM::BaseType::ObjectiveType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< UMAA::MM::BaseType::ObjectiveType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_UnionPlugin_new,
                UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_UnionPlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ObjectiveType_UnionPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ObjectiveType_UnionPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union >::from_cdr_buffer(UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ObjectiveType_UnionPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union from cdr buffer");
        }

        void topic_type_support< UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union >::reset_sample(UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union& sample) 
        {
            sample._d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT);
            ::rti::topic::reset_sample(sample.ProductDisseminateFileObjectiveType_data());
            sample._d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::RECOVERYOBJECTIVETYPE_SELECT);
            ::rti::topic::reset_sample(sample.RecoveryObjectiveType_data());
            sample._d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTEXPLOITATIONOBJECTIVETYPE_SELECT);
            ::rti::topic::reset_sample(sample.ProductExploitationObjectiveType_data());
            sample._d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::COMMSLINKOBJECTIVETYPE_SELECT);
            ::rti::topic::reset_sample(sample.CommsLinkObjectiveType_data());
            sample._d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::DEPLOYMENTOBJECTIVETYPE_SELECT);
            ::rti::topic::reset_sample(sample.DeploymentObjectiveType_data());
            sample._d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PASSIVELOITEROBJECTIVETYPE_SELECT);
            ::rti::topic::reset_sample(sample.PassiveLoiterObjectiveType_data());
            sample._d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::STATIONKEEPOBJECTIVETYPE_SELECT);
            ::rti::topic::reset_sample(sample.StationkeepObjectiveType_data());
            sample._d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::ROUTEOBJECTIVETYPE_SELECT);
            ::rti::topic::reset_sample(sample.RouteObjectiveType_data());
            sample._d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CHARGINGOBJECTIVETYPE_SELECT);
            ::rti::topic::reset_sample(sample.ChargingObjectiveType_data());
            sample._d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::LOITEROBJECTIVETYPE_SELECT);
            ::rti::topic::reset_sample(sample.LoiterObjectiveType_data());
            sample._d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CONTINGENCYOBJECTIVETYPE_SELECT);
            ::rti::topic::reset_sample(sample.ContingencyObjectiveType_data());

            sample._d() = UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union::default_discriminator();
        }

        void topic_type_support< UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union >::allocate_sample(UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union& sample, int, int) 
        {
            sample._d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT);
            ::rti::topic::allocate_sample(sample.ProductDisseminateFileObjectiveType_data(),  -1, -1);
            sample._d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::RECOVERYOBJECTIVETYPE_SELECT);
            ::rti::topic::allocate_sample(sample.RecoveryObjectiveType_data(),  -1, -1);
            sample._d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTEXPLOITATIONOBJECTIVETYPE_SELECT);
            ::rti::topic::allocate_sample(sample.ProductExploitationObjectiveType_data(),  -1, -1);
            sample._d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::COMMSLINKOBJECTIVETYPE_SELECT);
            ::rti::topic::allocate_sample(sample.CommsLinkObjectiveType_data(),  -1, -1);
            sample._d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::DEPLOYMENTOBJECTIVETYPE_SELECT);
            ::rti::topic::allocate_sample(sample.DeploymentObjectiveType_data(),  -1, -1);
            sample._d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PASSIVELOITEROBJECTIVETYPE_SELECT);
            ::rti::topic::allocate_sample(sample.PassiveLoiterObjectiveType_data(),  -1, -1);
            sample._d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::STATIONKEEPOBJECTIVETYPE_SELECT);
            ::rti::topic::allocate_sample(sample.StationkeepObjectiveType_data(),  -1, -1);
            sample._d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::ROUTEOBJECTIVETYPE_SELECT);
            ::rti::topic::allocate_sample(sample.RouteObjectiveType_data(),  -1, -1);
            sample._d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CHARGINGOBJECTIVETYPE_SELECT);
            ::rti::topic::allocate_sample(sample.ChargingObjectiveType_data(),  -1, -1);
            sample._d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::LOITEROBJECTIVETYPE_SELECT);
            ::rti::topic::allocate_sample(sample.LoiterObjectiveType_data(),  -1, -1);
            sample._d() = (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CONTINGENCYOBJECTIVETYPE_SELECT);
            ::rti::topic::allocate_sample(sample.ContingencyObjectiveType_data(),  -1, -1);

            sample._d() = UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union::default_discriminator();
        }

        void topic_type_support< UMAA::MM::BaseType::ObjectiveType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                UMAA::MM::BaseType::ObjectiveTypePlugin_new,
                UMAA::MM::BaseType::ObjectiveTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< UMAA::MM::BaseType::ObjectiveType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const UMAA::MM::BaseType::ObjectiveType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = ObjectiveTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = ObjectiveTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< UMAA::MM::BaseType::ObjectiveType >::from_cdr_buffer(UMAA::MM::BaseType::ObjectiveType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = ObjectiveTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create UMAA::MM::BaseType::ObjectiveType from cdr buffer");
        }

        void topic_type_support< UMAA::MM::BaseType::ObjectiveType >::reset_sample(UMAA::MM::BaseType::ObjectiveType& sample) 
        {
            sample.approvalRequired(0);
            ::rti::topic::reset_sample(sample.childObjectiveIDs());
            ::rti::topic::reset_sample(sample.dependentObjectiveIDs());
            ::rti::topic::reset_sample(sample.endTime());
            ::rti::topic::reset_sample(sample.endTimeTolerance());
            sample.name("");
            ::rti::topic::reset_sample(sample.preferredResourceIDs());
            sample.priority(0);
            ::rti::topic::reset_sample(sample.startTime());
            ::rti::topic::reset_sample(sample.startTimeTolerance());
            ::rti::topic::reset_sample(sample.ObjectiveType_subtypes());
            ::rti::topic::reset_sample(sample.objectiveID());
            ::rti::topic::reset_sample(sample.parentObjectiveID());
        }

        void topic_type_support< UMAA::MM::BaseType::ObjectiveType >::allocate_sample(UMAA::MM::BaseType::ObjectiveType& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.childObjectiveIDs(),  100L, -1);
            ::rti::topic::allocate_sample(sample.dependentObjectiveIDs(),  100L, -1);
            ::rti::topic::allocate_sample(sample.endTime(),  -1, -1);
            ::rti::topic::allocate_sample(sample.name(),  -1, 1023L);
            ::rti::topic::allocate_sample(sample.preferredResourceIDs(),  100L, -1);
            ::rti::topic::allocate_sample(sample.startTime(),  -1, -1);
            ::rti::topic::allocate_sample(sample.ObjectiveType_subtypes(),  -1, -1);
            ::rti::topic::allocate_sample(sample.objectiveID(),  -1, -1);
            ::rti::topic::allocate_sample(sample.parentObjectiveID(),  -1, -1);
        }

    }
}  

