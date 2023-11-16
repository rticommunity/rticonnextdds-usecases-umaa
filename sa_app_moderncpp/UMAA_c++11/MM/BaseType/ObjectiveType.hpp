

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ObjectiveType.idl
using RTI Code Generator (rtiddsgen) version 4.2.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef ObjectiveType_1323830816_hpp
#define ObjectiveType_1323830816_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/External.hpp"
#include "rti/core/LongDouble.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/core/array.hpp"
#include "rti/topic/TopicTraits.hpp"

#include "omg/types/string_view.hpp"

#include "rti/core/BoundedSequence.hpp"
#include "dds/core/Optional.hpp"

#ifndef NDDS_STANDALONE_TYPE
#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/Enumeration/EnumerationSets.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/Measurement/DateTime_Tolerance.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/Measurement/Measurements.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/PrimitiveConstrained/ConstrainedTypes.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/MM/BaseType/ChargingObjectiveType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/MM/BaseType/CommsLinkObjectiveType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/MM/BaseType/ContingencyObjectiveType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/MM/BaseType/DeploymentObjectiveType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/MM/BaseType/LoiterObjectiveType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/MM/BaseType/PassiveLoiterObjectiveType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/MM/BaseType/ProductDisseminateFileObjectiveType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/MM/BaseType/ProductExploitationObjectiveType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/MM/BaseType/RecoveryObjectiveType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/MM/BaseType/RouteObjectiveType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/MM/BaseType/StationkeepObjectiveType.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
#include "UMAA/Common/Measurement/Measurements.hpp"
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif
namespace UMAA {
    namespace MM {
        namespace BaseType {
            namespace ObjectiveType_Specializations {
                enum class ObjectiveType_Selectors {
                    PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT, 
                    RECOVERYOBJECTIVETYPE_SELECT, 
                    PRODUCTEXPLOITATIONOBJECTIVETYPE_SELECT, 
                    COMMSLINKOBJECTIVETYPE_SELECT, 
                    DEPLOYMENTOBJECTIVETYPE_SELECT, 
                    PASSIVELOITEROBJECTIVETYPE_SELECT, 
                    STATIONKEEPOBJECTIVETYPE_SELECT, 
                    ROUTEOBJECTIVETYPE_SELECT, 
                    CHARGINGOBJECTIVETYPE_SELECT, 
                    LOITEROBJECTIVETYPE_SELECT, 
                    CONTINGENCYOBJECTIVETYPE_SELECT
                };

                NDDSUSERDllExport std::ostream& operator << (std::ostream& o,const ObjectiveType_Selectors& sample);

                class NDDSUSERDllExport ObjectiveType_Union {
                  public:

                    ObjectiveType_Union();

                    ::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors& _d()  {
                        return m_d_;
                    }

                    const ::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors& _d() const  {
                        return m_d_;
                    }

                    void _d(::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors value) {

                        m_d_ = value;
                    }

                    ::UMAA::MM::BaseType::ProductDisseminateFileObjectiveType& ProductDisseminateFileObjectiveType_data()  {

                        if (_d() != (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union::ProductDisseminateFileObjectiveType_data not selected by the discriminator" );
                        }
                        return m_u_.m_ProductDisseminateFileObjectiveType_data_;
                    }

                    const ::UMAA::MM::BaseType::ProductDisseminateFileObjectiveType& ProductDisseminateFileObjectiveType_data() const  {

                        if (_d() != (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union::ProductDisseminateFileObjectiveType_data not selected by the discriminator" );
                        }
                        return m_u_.m_ProductDisseminateFileObjectiveType_data_;
                    }

                    void ProductDisseminateFileObjectiveType_data(const ::UMAA::MM::BaseType::ProductDisseminateFileObjectiveType& value) {
                        m_u_.m_ProductDisseminateFileObjectiveType_data_ = value;
                        m_d_= (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT);
                    }

                    void ProductDisseminateFileObjectiveType_data(::UMAA::MM::BaseType::ProductDisseminateFileObjectiveType&& value) {
                        m_u_.m_ProductDisseminateFileObjectiveType_data_ = std::move(value);
                        m_d_= (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTDISSEMINATEFILEOBJECTIVETYPE_SELECT);
                    }
                    ::UMAA::MM::BaseType::RecoveryObjectiveType& RecoveryObjectiveType_data()  {

                        if (_d() != (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::RECOVERYOBJECTIVETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union::RecoveryObjectiveType_data not selected by the discriminator" );
                        }
                        return m_u_.m_RecoveryObjectiveType_data_;
                    }

                    const ::UMAA::MM::BaseType::RecoveryObjectiveType& RecoveryObjectiveType_data() const  {

                        if (_d() != (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::RECOVERYOBJECTIVETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union::RecoveryObjectiveType_data not selected by the discriminator" );
                        }
                        return m_u_.m_RecoveryObjectiveType_data_;
                    }

                    void RecoveryObjectiveType_data(const ::UMAA::MM::BaseType::RecoveryObjectiveType& value) {
                        m_u_.m_RecoveryObjectiveType_data_ = value;
                        m_d_= (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::RECOVERYOBJECTIVETYPE_SELECT);
                    }

                    void RecoveryObjectiveType_data(::UMAA::MM::BaseType::RecoveryObjectiveType&& value) {
                        m_u_.m_RecoveryObjectiveType_data_ = std::move(value);
                        m_d_= (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::RECOVERYOBJECTIVETYPE_SELECT);
                    }
                    ::UMAA::MM::BaseType::ProductExploitationObjectiveType& ProductExploitationObjectiveType_data()  {

                        if (_d() != (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTEXPLOITATIONOBJECTIVETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union::ProductExploitationObjectiveType_data not selected by the discriminator" );
                        }
                        return m_u_.m_ProductExploitationObjectiveType_data_;
                    }

                    const ::UMAA::MM::BaseType::ProductExploitationObjectiveType& ProductExploitationObjectiveType_data() const  {

                        if (_d() != (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTEXPLOITATIONOBJECTIVETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union::ProductExploitationObjectiveType_data not selected by the discriminator" );
                        }
                        return m_u_.m_ProductExploitationObjectiveType_data_;
                    }

                    void ProductExploitationObjectiveType_data(const ::UMAA::MM::BaseType::ProductExploitationObjectiveType& value) {
                        m_u_.m_ProductExploitationObjectiveType_data_ = value;
                        m_d_= (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTEXPLOITATIONOBJECTIVETYPE_SELECT);
                    }

                    void ProductExploitationObjectiveType_data(::UMAA::MM::BaseType::ProductExploitationObjectiveType&& value) {
                        m_u_.m_ProductExploitationObjectiveType_data_ = std::move(value);
                        m_d_= (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PRODUCTEXPLOITATIONOBJECTIVETYPE_SELECT);
                    }
                    ::UMAA::MM::BaseType::CommsLinkObjectiveType& CommsLinkObjectiveType_data()  {

                        if (_d() != (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::COMMSLINKOBJECTIVETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union::CommsLinkObjectiveType_data not selected by the discriminator" );
                        }
                        return m_u_.m_CommsLinkObjectiveType_data_;
                    }

                    const ::UMAA::MM::BaseType::CommsLinkObjectiveType& CommsLinkObjectiveType_data() const  {

                        if (_d() != (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::COMMSLINKOBJECTIVETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union::CommsLinkObjectiveType_data not selected by the discriminator" );
                        }
                        return m_u_.m_CommsLinkObjectiveType_data_;
                    }

                    void CommsLinkObjectiveType_data(const ::UMAA::MM::BaseType::CommsLinkObjectiveType& value) {
                        m_u_.m_CommsLinkObjectiveType_data_ = value;
                        m_d_= (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::COMMSLINKOBJECTIVETYPE_SELECT);
                    }

                    void CommsLinkObjectiveType_data(::UMAA::MM::BaseType::CommsLinkObjectiveType&& value) {
                        m_u_.m_CommsLinkObjectiveType_data_ = std::move(value);
                        m_d_= (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::COMMSLINKOBJECTIVETYPE_SELECT);
                    }
                    ::UMAA::MM::BaseType::DeploymentObjectiveType& DeploymentObjectiveType_data()  {

                        if (_d() != (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::DEPLOYMENTOBJECTIVETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union::DeploymentObjectiveType_data not selected by the discriminator" );
                        }
                        return m_u_.m_DeploymentObjectiveType_data_;
                    }

                    const ::UMAA::MM::BaseType::DeploymentObjectiveType& DeploymentObjectiveType_data() const  {

                        if (_d() != (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::DEPLOYMENTOBJECTIVETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union::DeploymentObjectiveType_data not selected by the discriminator" );
                        }
                        return m_u_.m_DeploymentObjectiveType_data_;
                    }

                    void DeploymentObjectiveType_data(const ::UMAA::MM::BaseType::DeploymentObjectiveType& value) {
                        m_u_.m_DeploymentObjectiveType_data_ = value;
                        m_d_= (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::DEPLOYMENTOBJECTIVETYPE_SELECT);
                    }

                    void DeploymentObjectiveType_data(::UMAA::MM::BaseType::DeploymentObjectiveType&& value) {
                        m_u_.m_DeploymentObjectiveType_data_ = std::move(value);
                        m_d_= (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::DEPLOYMENTOBJECTIVETYPE_SELECT);
                    }
                    ::UMAA::MM::BaseType::PassiveLoiterObjectiveType& PassiveLoiterObjectiveType_data()  {

                        if (_d() != (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PASSIVELOITEROBJECTIVETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union::PassiveLoiterObjectiveType_data not selected by the discriminator" );
                        }
                        return m_u_.m_PassiveLoiterObjectiveType_data_;
                    }

                    const ::UMAA::MM::BaseType::PassiveLoiterObjectiveType& PassiveLoiterObjectiveType_data() const  {

                        if (_d() != (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PASSIVELOITEROBJECTIVETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union::PassiveLoiterObjectiveType_data not selected by the discriminator" );
                        }
                        return m_u_.m_PassiveLoiterObjectiveType_data_;
                    }

                    void PassiveLoiterObjectiveType_data(const ::UMAA::MM::BaseType::PassiveLoiterObjectiveType& value) {
                        m_u_.m_PassiveLoiterObjectiveType_data_ = value;
                        m_d_= (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PASSIVELOITEROBJECTIVETYPE_SELECT);
                    }

                    void PassiveLoiterObjectiveType_data(::UMAA::MM::BaseType::PassiveLoiterObjectiveType&& value) {
                        m_u_.m_PassiveLoiterObjectiveType_data_ = std::move(value);
                        m_d_= (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::PASSIVELOITEROBJECTIVETYPE_SELECT);
                    }
                    ::UMAA::MM::BaseType::StationkeepObjectiveType& StationkeepObjectiveType_data()  {

                        if (_d() != (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::STATIONKEEPOBJECTIVETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union::StationkeepObjectiveType_data not selected by the discriminator" );
                        }
                        return m_u_.m_StationkeepObjectiveType_data_;
                    }

                    const ::UMAA::MM::BaseType::StationkeepObjectiveType& StationkeepObjectiveType_data() const  {

                        if (_d() != (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::STATIONKEEPOBJECTIVETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union::StationkeepObjectiveType_data not selected by the discriminator" );
                        }
                        return m_u_.m_StationkeepObjectiveType_data_;
                    }

                    void StationkeepObjectiveType_data(const ::UMAA::MM::BaseType::StationkeepObjectiveType& value) {
                        m_u_.m_StationkeepObjectiveType_data_ = value;
                        m_d_= (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::STATIONKEEPOBJECTIVETYPE_SELECT);
                    }

                    void StationkeepObjectiveType_data(::UMAA::MM::BaseType::StationkeepObjectiveType&& value) {
                        m_u_.m_StationkeepObjectiveType_data_ = std::move(value);
                        m_d_= (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::STATIONKEEPOBJECTIVETYPE_SELECT);
                    }
                    ::UMAA::MM::BaseType::RouteObjectiveType& RouteObjectiveType_data()  {

                        if (_d() != (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::ROUTEOBJECTIVETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union::RouteObjectiveType_data not selected by the discriminator" );
                        }
                        return m_u_.m_RouteObjectiveType_data_;
                    }

                    const ::UMAA::MM::BaseType::RouteObjectiveType& RouteObjectiveType_data() const  {

                        if (_d() != (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::ROUTEOBJECTIVETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union::RouteObjectiveType_data not selected by the discriminator" );
                        }
                        return m_u_.m_RouteObjectiveType_data_;
                    }

                    void RouteObjectiveType_data(const ::UMAA::MM::BaseType::RouteObjectiveType& value) {
                        m_u_.m_RouteObjectiveType_data_ = value;
                        m_d_= (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::ROUTEOBJECTIVETYPE_SELECT);
                    }

                    void RouteObjectiveType_data(::UMAA::MM::BaseType::RouteObjectiveType&& value) {
                        m_u_.m_RouteObjectiveType_data_ = std::move(value);
                        m_d_= (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::ROUTEOBJECTIVETYPE_SELECT);
                    }
                    ::UMAA::MM::BaseType::ChargingObjectiveType& ChargingObjectiveType_data()  {

                        if (_d() != (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CHARGINGOBJECTIVETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union::ChargingObjectiveType_data not selected by the discriminator" );
                        }
                        return m_u_.m_ChargingObjectiveType_data_;
                    }

                    const ::UMAA::MM::BaseType::ChargingObjectiveType& ChargingObjectiveType_data() const  {

                        if (_d() != (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CHARGINGOBJECTIVETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union::ChargingObjectiveType_data not selected by the discriminator" );
                        }
                        return m_u_.m_ChargingObjectiveType_data_;
                    }

                    void ChargingObjectiveType_data(const ::UMAA::MM::BaseType::ChargingObjectiveType& value) {
                        m_u_.m_ChargingObjectiveType_data_ = value;
                        m_d_= (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CHARGINGOBJECTIVETYPE_SELECT);
                    }

                    void ChargingObjectiveType_data(::UMAA::MM::BaseType::ChargingObjectiveType&& value) {
                        m_u_.m_ChargingObjectiveType_data_ = std::move(value);
                        m_d_= (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CHARGINGOBJECTIVETYPE_SELECT);
                    }
                    ::UMAA::MM::BaseType::LoiterObjectiveType& LoiterObjectiveType_data()  {

                        if (_d() != (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::LOITEROBJECTIVETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union::LoiterObjectiveType_data not selected by the discriminator" );
                        }
                        return m_u_.m_LoiterObjectiveType_data_;
                    }

                    const ::UMAA::MM::BaseType::LoiterObjectiveType& LoiterObjectiveType_data() const  {

                        if (_d() != (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::LOITEROBJECTIVETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union::LoiterObjectiveType_data not selected by the discriminator" );
                        }
                        return m_u_.m_LoiterObjectiveType_data_;
                    }

                    void LoiterObjectiveType_data(const ::UMAA::MM::BaseType::LoiterObjectiveType& value) {
                        m_u_.m_LoiterObjectiveType_data_ = value;
                        m_d_= (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::LOITEROBJECTIVETYPE_SELECT);
                    }

                    void LoiterObjectiveType_data(::UMAA::MM::BaseType::LoiterObjectiveType&& value) {
                        m_u_.m_LoiterObjectiveType_data_ = std::move(value);
                        m_d_= (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::LOITEROBJECTIVETYPE_SELECT);
                    }
                    ::UMAA::MM::BaseType::ContingencyObjectiveType& ContingencyObjectiveType_data()  {

                        if (_d() != (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CONTINGENCYOBJECTIVETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union::ContingencyObjectiveType_data not selected by the discriminator" );
                        }
                        return m_u_.m_ContingencyObjectiveType_data_;
                    }

                    const ::UMAA::MM::BaseType::ContingencyObjectiveType& ContingencyObjectiveType_data() const  {

                        if (_d() != (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CONTINGENCYOBJECTIVETYPE_SELECT) ) {

                            throw ::dds::core::PreconditionNotMetError(
                                "::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union::ContingencyObjectiveType_data not selected by the discriminator" );
                        }
                        return m_u_.m_ContingencyObjectiveType_data_;
                    }

                    void ContingencyObjectiveType_data(const ::UMAA::MM::BaseType::ContingencyObjectiveType& value) {
                        m_u_.m_ContingencyObjectiveType_data_ = value;
                        m_d_= (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CONTINGENCYOBJECTIVETYPE_SELECT);
                    }

                    void ContingencyObjectiveType_data(::UMAA::MM::BaseType::ContingencyObjectiveType&& value) {
                        m_u_.m_ContingencyObjectiveType_data_ = std::move(value);
                        m_d_= (UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors::CONTINGENCYOBJECTIVETYPE_SELECT);
                    }
                    bool operator == (const ObjectiveType_Union& other_) const;
                    bool operator != (const ObjectiveType_Union& other_) const;
                    static ::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors default_discriminator();

                    void swap(ObjectiveType_Union& other_) noexcept ;

                  private:

                    ::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors m_d_;
                    struct NDDSUSERDllExport Union_ {
                        ::UMAA::MM::BaseType::ProductDisseminateFileObjectiveType m_ProductDisseminateFileObjectiveType_data_;
                        ::UMAA::MM::BaseType::RecoveryObjectiveType m_RecoveryObjectiveType_data_;
                        ::UMAA::MM::BaseType::ProductExploitationObjectiveType m_ProductExploitationObjectiveType_data_;
                        ::UMAA::MM::BaseType::CommsLinkObjectiveType m_CommsLinkObjectiveType_data_;
                        ::UMAA::MM::BaseType::DeploymentObjectiveType m_DeploymentObjectiveType_data_;
                        ::UMAA::MM::BaseType::PassiveLoiterObjectiveType m_PassiveLoiterObjectiveType_data_;
                        ::UMAA::MM::BaseType::StationkeepObjectiveType m_StationkeepObjectiveType_data_;
                        ::UMAA::MM::BaseType::RouteObjectiveType m_RouteObjectiveType_data_;
                        ::UMAA::MM::BaseType::ChargingObjectiveType m_ChargingObjectiveType_data_;
                        ::UMAA::MM::BaseType::LoiterObjectiveType m_LoiterObjectiveType_data_;
                        ::UMAA::MM::BaseType::ContingencyObjectiveType m_ContingencyObjectiveType_data_;
                        Union_();
                        Union_(const ::UMAA::MM::BaseType::ProductDisseminateFileObjectiveType& ProductDisseminateFileObjectiveType_data_,const ::UMAA::MM::BaseType::RecoveryObjectiveType& RecoveryObjectiveType_data_,const ::UMAA::MM::BaseType::ProductExploitationObjectiveType& ProductExploitationObjectiveType_data_,const ::UMAA::MM::BaseType::CommsLinkObjectiveType& CommsLinkObjectiveType_data_,const ::UMAA::MM::BaseType::DeploymentObjectiveType& DeploymentObjectiveType_data_,const ::UMAA::MM::BaseType::PassiveLoiterObjectiveType& PassiveLoiterObjectiveType_data_,const ::UMAA::MM::BaseType::StationkeepObjectiveType& StationkeepObjectiveType_data_,const ::UMAA::MM::BaseType::RouteObjectiveType& RouteObjectiveType_data_,const ::UMAA::MM::BaseType::ChargingObjectiveType& ChargingObjectiveType_data_,const ::UMAA::MM::BaseType::LoiterObjectiveType& LoiterObjectiveType_data_,const ::UMAA::MM::BaseType::ContingencyObjectiveType& ContingencyObjectiveType_data_);
                    };
                    Union_ m_u_;

                };

                inline void swap(ObjectiveType_Union& a, ObjectiveType_Union& b)  noexcept 
                {
                    a.swap(b);
                }

                NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ObjectiveType_Union& sample);

            } // namespace ObjectiveType_Specializations  

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            // On Windows, dll-export template instantiations of standard types used by
            // other dll-exported types
            template class NDDSUSERDllExport std::allocator< ::UMAA::Common::Measurement::NumericGUID >;
            template class NDDSUSERDllExport std::vector< ::UMAA::Common::Measurement::NumericGUID >;
            #endif
            class NDDSUSERDllExport ObjectiveType {
              public:

                ObjectiveType();

                ObjectiveType(bool approvalRequired_,const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& childObjectiveIDs_,const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& dependentObjectiveIDs_,const ::UMAA::Common::Measurement::DateTime& endTime_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance >& endTimeTolerance_,const std::string& name_,const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& preferredResourceIDs_,int32_t priority_,const ::UMAA::Common::Measurement::DateTime& startTime_,const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance >& startTimeTolerance_,const ::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union& ObjectiveType_subtypes_,const ::UMAA::Common::Measurement::NumericGUID& objectiveID_,const ::UMAA::Common::Measurement::NumericGUID& parentObjectiveID_);

                bool& approvalRequired() noexcept {
                    return m_approvalRequired_;
                }

                const bool& approvalRequired() const noexcept {
                    return m_approvalRequired_;
                }

                void approvalRequired(bool value) {

                    m_approvalRequired_ = value;
                }

                ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& childObjectiveIDs() noexcept {
                    return m_childObjectiveIDs_;
                }

                const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& childObjectiveIDs() const noexcept {
                    return m_childObjectiveIDs_;
                }

                void childObjectiveIDs(const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& value) {

                    m_childObjectiveIDs_ = value;
                }

                void childObjectiveIDs(::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >&& value) {
                    m_childObjectiveIDs_ = std::move(value);
                }
                ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& dependentObjectiveIDs() noexcept {
                    return m_dependentObjectiveIDs_;
                }

                const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& dependentObjectiveIDs() const noexcept {
                    return m_dependentObjectiveIDs_;
                }

                void dependentObjectiveIDs(const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& value) {

                    m_dependentObjectiveIDs_ = value;
                }

                void dependentObjectiveIDs(::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >&& value) {
                    m_dependentObjectiveIDs_ = std::move(value);
                }
                ::UMAA::Common::Measurement::DateTime& endTime() noexcept {
                    return m_endTime_;
                }

                const ::UMAA::Common::Measurement::DateTime& endTime() const noexcept {
                    return m_endTime_;
                }

                void endTime(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_endTime_ = value;
                }

                void endTime(::UMAA::Common::Measurement::DateTime&& value) {
                    m_endTime_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance >& endTimeTolerance() noexcept {
                    return m_endTimeTolerance_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance >& endTimeTolerance() const noexcept {
                    return m_endTimeTolerance_;
                }

                void endTimeTolerance(const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance >& value) {

                    m_endTimeTolerance_ = value;
                }

                void endTimeTolerance(::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance >&& value) {
                    m_endTimeTolerance_ = std::move(value);
                }
                std::string& name() noexcept {
                    return m_name_;
                }

                const std::string& name() const noexcept {
                    return m_name_;
                }

                void name(const std::string& value) {

                    m_name_ = value;
                }

                void name(std::string&& value) {
                    m_name_ = std::move(value);
                }
                ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& preferredResourceIDs() noexcept {
                    return m_preferredResourceIDs_;
                }

                const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& preferredResourceIDs() const noexcept {
                    return m_preferredResourceIDs_;
                }

                void preferredResourceIDs(const ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >& value) {

                    m_preferredResourceIDs_ = value;
                }

                void preferredResourceIDs(::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L >&& value) {
                    m_preferredResourceIDs_ = std::move(value);
                }
                int32_t& priority() noexcept {
                    return m_priority_;
                }

                const int32_t& priority() const noexcept {
                    return m_priority_;
                }

                void priority(int32_t value) {

                    m_priority_ = value;
                }

                ::UMAA::Common::Measurement::DateTime& startTime() noexcept {
                    return m_startTime_;
                }

                const ::UMAA::Common::Measurement::DateTime& startTime() const noexcept {
                    return m_startTime_;
                }

                void startTime(const ::UMAA::Common::Measurement::DateTime& value) {

                    m_startTime_ = value;
                }

                void startTime(::UMAA::Common::Measurement::DateTime&& value) {
                    m_startTime_ = std::move(value);
                }
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance >& startTimeTolerance() noexcept {
                    return m_startTimeTolerance_;
                }

                const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance >& startTimeTolerance() const noexcept {
                    return m_startTimeTolerance_;
                }

                void startTimeTolerance(const ::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance >& value) {

                    m_startTimeTolerance_ = value;
                }

                void startTimeTolerance(::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance >&& value) {
                    m_startTimeTolerance_ = std::move(value);
                }
                ::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union& ObjectiveType_subtypes() noexcept {
                    return m_ObjectiveType_subtypes_;
                }

                const ::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union& ObjectiveType_subtypes() const noexcept {
                    return m_ObjectiveType_subtypes_;
                }

                void ObjectiveType_subtypes(const ::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union& value) {

                    m_ObjectiveType_subtypes_ = value;
                }

                void ObjectiveType_subtypes(::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union&& value) {
                    m_ObjectiveType_subtypes_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& objectiveID() noexcept {
                    return m_objectiveID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& objectiveID() const noexcept {
                    return m_objectiveID_;
                }

                void objectiveID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_objectiveID_ = value;
                }

                void objectiveID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_objectiveID_ = std::move(value);
                }
                ::UMAA::Common::Measurement::NumericGUID& parentObjectiveID() noexcept {
                    return m_parentObjectiveID_;
                }

                const ::UMAA::Common::Measurement::NumericGUID& parentObjectiveID() const noexcept {
                    return m_parentObjectiveID_;
                }

                void parentObjectiveID(const ::UMAA::Common::Measurement::NumericGUID& value) {

                    m_parentObjectiveID_ = value;
                }

                void parentObjectiveID(::UMAA::Common::Measurement::NumericGUID&& value) {
                    m_parentObjectiveID_ = std::move(value);
                }
                bool operator == (const ObjectiveType& other_) const;
                bool operator != (const ObjectiveType& other_) const;

                void swap(ObjectiveType& other_) noexcept ;

              private:

                bool m_approvalRequired_;
                ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L > m_childObjectiveIDs_;
                ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L > m_dependentObjectiveIDs_;
                ::UMAA::Common::Measurement::DateTime m_endTime_;
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance > m_endTimeTolerance_;
                std::string m_name_;
                ::rti::core::bounded_sequence< ::UMAA::Common::Measurement::NumericGUID, 100L > m_preferredResourceIDs_;
                int32_t m_priority_;
                ::UMAA::Common::Measurement::DateTime m_startTime_;
                ::dds::core::optional< ::UMAA::Common::Measurement::DateTime_Tolerance > m_startTimeTolerance_;
                ::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union m_ObjectiveType_subtypes_;
                ::UMAA::Common::Measurement::NumericGUID m_objectiveID_ {};
                ::UMAA::Common::Measurement::NumericGUID m_parentObjectiveID_ {};

            };

            inline void swap(ObjectiveType& a, ObjectiveType& b)  noexcept 
            {
                a.swap(b);
            }

            NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const ObjectiveType& sample);

        } // namespace BaseType  
    } // namespace MM  
} // namespace UMAA  

#ifdef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace topic {
        template <>
        struct default_enumerator< ::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors>
        {
            static const ::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors value;
        };
    }
}
#else

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< ::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
        template<>
        struct topic_type_name< ::UMAA::MM::BaseType::ObjectiveType > {
            NDDSUSERDllExport static std::string value() {
                return "UMAA::MM::BaseType::ObjectiveType";
            }
        };

        template<>
        struct is_topic_type< ::UMAA::MM::BaseType::ObjectiveType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< ::UMAA::MM::BaseType::ObjectiveType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const ::UMAA::MM::BaseType::ObjectiveType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(::UMAA::MM::BaseType::ObjectiveType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(::UMAA::MM::BaseType::ObjectiveType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(::UMAA::MM::BaseType::ObjectiveType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };
    }
}

namespace rti { 
    namespace topic {

        template <>
        struct default_enumerator< ::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors>
        {
            static const ::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors value;
        };
        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors > {
            typedef ::dds::core::xtypes::EnumType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::EnumType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Selectors > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union > {
            typedef ::dds::core::xtypes::UnionType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::UnionType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::ObjectiveType_Specializations::ObjectiveType_Union > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

        template<>
        struct dynamic_type< ::UMAA::MM::BaseType::ObjectiveType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility< ::UMAA::MM::BaseType::ObjectiveType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;    };

    }
}

#endif // NDDS_STANDALONE_TYPE
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // ObjectiveType_1323830816_hpp

