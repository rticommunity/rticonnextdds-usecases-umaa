
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ResourceAllocationPriorityReportType.idl
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
from IdentifierType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/SO/ResourceAllocation/'))
from ResourceAllocationPriorityInfo import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SO = idl.get_module("UMAA_SO")

UMAA.SO = UMAA_SO

UMAA_SO_ResourceAllocation = idl.get_module("UMAA_SO_ResourceAllocation")

UMAA.SO.ResourceAllocation = UMAA_SO_ResourceAllocation

UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportTypeTopic = "UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType"

UMAA.SO.ResourceAllocation.ResourceAllocationPriorityReportTypeTopic = UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SO::ResourceAllocation::ResourceAllocationPriorityReportType")],
    member_annotations = {
        'priorities': [idl.bound(24)],
        'source': [idl.key, ],
    }
)
class UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType:
    priorities: Sequence[UMAA.SO.ResourceAllocation.ResourceAllocationPriorityInfo] = field(default_factory = list)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SO.ResourceAllocation.ResourceAllocationPriorityReportType = UMAA_SO_ResourceAllocation_ResourceAllocationPriorityReportType
