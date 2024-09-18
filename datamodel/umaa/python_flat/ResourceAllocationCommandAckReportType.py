
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ResourceAllocationCommandAckReportType.idl
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
from ResourceAllocationCommandType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SO = idl.get_module("UMAA_SO")

UMAA.SO = UMAA_SO

UMAA_SO_ResourceAllocation = idl.get_module("UMAA_SO_ResourceAllocation")

UMAA.SO.ResourceAllocation = UMAA_SO_ResourceAllocation

UMAA_SO_ResourceAllocation_ResourceAllocationCommandAckReportTypeTopic = "UMAA::SO::ResourceAllocation::ResourceAllocationCommandAckReportType"

UMAA.SO.ResourceAllocation.ResourceAllocationCommandAckReportTypeTopic = UMAA_SO_ResourceAllocation_ResourceAllocationCommandAckReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SO::ResourceAllocation::ResourceAllocationCommandAckReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
    }
)
class UMAA_SO_ResourceAllocation_ResourceAllocationCommandAckReportType:
    command: UMAA.SO.ResourceAllocation.ResourceAllocationCommandType = field(default_factory = UMAA.SO.ResourceAllocation.ResourceAllocationCommandType)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.SO.ResourceAllocation.ResourceAllocationCommandAckReportType = UMAA_SO_ResourceAllocation_ResourceAllocationCommandAckReportType
