
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from MemoryReportType.idl
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

UMAA_SO_MemoryStatus = idl.get_module("UMAA_SO_MemoryStatus")

UMAA.SO.MemoryStatus = UMAA_SO_MemoryStatus

UMAA_SO_MemoryStatus_MemoryReportTypeTopic = "UMAA::SO::MemoryStatus::MemoryReportType"

UMAA.SO.MemoryStatus.MemoryReportTypeTopic = UMAA_SO_MemoryStatus_MemoryReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SO::MemoryStatus::MemoryReportType")],
    member_annotations = {
        'source': [idl.key, ],
    }
)
class UMAA_SO_MemoryStatus_MemoryReportType:
    bufferedRam: Optional[idl.uint64] = None
    freeMemory: idl.uint64 = 0
    freeSwap: Optional[idl.uint64] = None
    sharedMemory: Optional[idl.uint64] = None
    totalMemory: idl.uint64 = 0
    totalSwap: Optional[idl.uint64] = None
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SO.MemoryStatus.MemoryReportType = UMAA_SO_MemoryStatus_MemoryReportType
