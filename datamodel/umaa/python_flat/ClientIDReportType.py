
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ClientIDReportType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/PrimitiveConstrained/'))
from ConstrainedTypes import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SO = idl.get_module("UMAA_SO")

UMAA.SO = UMAA_SO

UMAA_SO_ControlSystemID = idl.get_module("UMAA_SO_ControlSystemID")

UMAA.SO.ControlSystemID = UMAA_SO_ControlSystemID

UMAA_SO_ControlSystemID_ClientIDReportTypeTopic = "UMAA::SO::ControlSystemID::ClientIDReportType"

UMAA.SO.ControlSystemID.ClientIDReportTypeTopic = UMAA_SO_ControlSystemID_ClientIDReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SO::ControlSystemID::ClientIDReportType")],
    member_annotations = {
        'name': [idl.bound(1023)],
        'source': [idl.key, ],
    }
)
class UMAA_SO_ControlSystemID_ClientIDReportType:
    name: str = ""
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SO.ControlSystemID.ClientIDReportType = UMAA_SO_ControlSystemID_ClientIDReportType
