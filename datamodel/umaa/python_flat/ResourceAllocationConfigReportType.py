
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ResourceAllocationConfigReportType.idl
# using RTI Code Generator (rtiddsgen) version 4.3.0.
# The rtiddsgen tool is part of the RTI Connext DDS distribution.
# For more information, type 'rtiddsgen -help' at a command shell
# or consult the Code Generator User's Manual.

from dataclasses import field
from typing import Union, Sequence, Optional
import rti.idl as idl
from enum import IntEnum
import sys
import os

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/'))
from LargeSetMetadata import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/'))
from IdentifierType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/SO/ResourceAllocation/'))
from ResourceAllocationDefinitionType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SO = idl.get_module("UMAA_SO")

UMAA.SO = UMAA_SO

UMAA_SO_ResourceAllocation = idl.get_module("UMAA_SO_ResourceAllocation")

UMAA.SO.ResourceAllocation = UMAA_SO_ResourceAllocation

UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportTypeTopic = "UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType"

UMAA.SO.ResourceAllocation.ResourceAllocationConfigReportTypeTopic = UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType:
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    resourcesSetMetadata: UMAA.Common.LargeSetMetadata = field(default_factory = UMAA.Common.LargeSetMetadata)

UMAA.SO.ResourceAllocation.ResourceAllocationConfigReportType = UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportType

UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportTypeResourcesSetElementTopic = "UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportTypeResourcesSetElement"

UMAA.SO.ResourceAllocation.ResourceAllocationConfigReportTypeResourcesSetElementTopic = UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportTypeResourcesSetElementTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SO::ResourceAllocation::ResourceAllocationConfigReportTypeResourcesSetElement")],
    member_annotations = {
        'setID': [idl.key, ],
        'elementID': [idl.key, ],
    }
)
class UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportTypeResourcesSetElement:
    element: UMAA.SO.ResourceAllocation.ResourceAllocationDefinitionType = field(default_factory = UMAA.SO.ResourceAllocation.ResourceAllocationDefinitionType)
    setID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    elementTimestamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)

UMAA.SO.ResourceAllocation.ResourceAllocationConfigReportTypeResourcesSetElement = UMAA_SO_ResourceAllocation_ResourceAllocationConfigReportTypeResourcesSetElement
