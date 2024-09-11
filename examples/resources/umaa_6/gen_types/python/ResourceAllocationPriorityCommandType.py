
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ResourceAllocationPriorityCommandType.idl
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

UMAA = idl.get_module("UMAA")

UMAA_SO = idl.get_module("UMAA_SO")

UMAA.SO = UMAA_SO

UMAA_SO_ResourceAllocation = idl.get_module("UMAA_SO_ResourceAllocation")

UMAA.SO.ResourceAllocation = UMAA_SO_ResourceAllocation

UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandTypeTopic = "UMAA::SO::ResourceAllocation::ResourceAllocationPriorityCommandType"

UMAA.SO.ResourceAllocation.ResourceAllocationPriorityCommandTypeTopic = UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SO::ResourceAllocation::ResourceAllocationPriorityCommandType")],
    member_annotations = {
        'priorities': [idl.bound(100)],
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
        'destination': [idl.key, ],
    }
)
class UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType:
    priorities: Sequence[UMAA.Common.IdentifierType] = field(default_factory = list)
    resourceID: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)
    destination: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SO.ResourceAllocation.ResourceAllocationPriorityCommandType = UMAA_SO_ResourceAllocation_ResourceAllocationPriorityCommandType
