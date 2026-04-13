
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ControlSystemControlReportType.idl
# using RTI Code Generator (rtiddsgen) version 4.6.0.
# The rtiddsgen tool is part of the RTI Connext DDS distribution.
# For more information, type 'rtiddsgen -help' at a command shell
# or consult the Code Generator User's Manual.

from dataclasses import field
from typing import Union, Sequence, Optional
import rti.idl as idl
import rti.rpc as rpc
from enum import IntEnum
import sys
import os
from abc import ABC


sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Enumeration/'))
from EnumerationSets import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/'))
from IdentifierType import *
sys.path.pop()
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_MM = idl.get_module("UMAA_MM")

UMAA.MM = UMAA_MM

UMAA_MM_ControlTransfer = idl.get_module("UMAA_MM_ControlTransfer")

UMAA.MM.ControlTransfer = UMAA_MM_ControlTransfer

UMAA_MM_ControlTransfer_ControlSystemControlReportTypeTopic = "UMAA::MM::ControlTransfer::ControlSystemControlReportType"

UMAA.MM.ControlTransfer.ControlSystemControlReportTypeTopic = UMAA_MM_ControlTransfer_ControlSystemControlReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::MM::ControlTransfer::ControlSystemControlReportType"), idl.xtypes_compliance(0x0000018C), ],

    member_annotations = {
        'status': [idl.default(0),],
        'source': [idl.key, ],
    }
)
class UMAA_MM_ControlTransfer_ControlSystemControlReportType:
    authorityLevel: idl.int32 = 0
    controlSystemID: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    status: UMAA.Common.Enumeration.ResourceAllocationStatusEnumModule.ResourceAllocationStatusEnumType = UMAA.Common.Enumeration.ResourceAllocationStatusEnumModule.ResourceAllocationStatusEnumType.ALLOCATED
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.MM.ControlTransfer.ControlSystemControlReportType = UMAA_MM_ControlTransfer_ControlSystemControlReportType
