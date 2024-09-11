
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from MastCommandAckReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/EO/MastControl/'))
from MastCommandType import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_EO = idl.get_module("UMAA_EO")

UMAA.EO = UMAA_EO

UMAA_EO_MastControl = idl.get_module("UMAA_EO_MastControl")

UMAA.EO.MastControl = UMAA_EO_MastControl

UMAA_EO_MastControl_MastCommandAckReportTypeTopic = "UMAA::EO::MastControl::MastCommandAckReportType"

UMAA.EO.MastControl.MastCommandAckReportTypeTopic = UMAA_EO_MastControl_MastCommandAckReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::EO::MastControl::MastCommandAckReportType")],
    member_annotations = {
        'source': [idl.key, ],
        'sessionID': [idl.key, ],
    }
)
class UMAA_EO_MastControl_MastCommandAckReportType:
    command: UMAA.EO.MastControl.MastCommandType = field(default_factory = UMAA.EO.MastControl.MastCommandType)
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)
    sessionID: UMAA.Common.Measurement.NumericGUID = field(default_factory = UMAA.Common.Measurement.NumericGUID)

UMAA.EO.MastControl.MastCommandAckReportType = UMAA_EO_MastControl_MastCommandAckReportType
