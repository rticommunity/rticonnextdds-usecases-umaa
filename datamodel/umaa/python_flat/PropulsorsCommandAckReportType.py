
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from PropulsorsCommandAckReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/EO/PropulsorsControl/'))
from PropulsorsCommandType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_PropulsorsControl = idl.get_module("UMAA_EO_PropulsorsControl")

UMAA.EO.PropulsorsControl = UMAA_EO_PropulsorsControl

UMAA_EO_PropulsorsControl_PropulsorsCommandAckReportTypeTopic = "UMAA::EO::PropulsorsControl::PropulsorsCommandAckReportType"

UMAA.EO.PropulsorsControl.PropulsorsCommandAckReportTypeTopic = UMAA_EO_PropulsorsControl_PropulsorsCommandAckReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::PropulsorsControl::PropulsorsCommandAckReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
    }
)
class UMAA_EO_PropulsorsControl_PropulsorsCommandAckReportType:
    command: UMAA.EO.PropulsorsControl.PropulsorsCommandType = field(default_factory = UMAA.EO.PropulsorsControl.PropulsorsCommandType)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.EO.PropulsorsControl.PropulsorsCommandAckReportType = UMAA_EO_PropulsorsControl_PropulsorsCommandAckReportType