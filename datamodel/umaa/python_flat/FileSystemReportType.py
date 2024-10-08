
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from FileSystemReportType.idl
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

sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Enumeration/'))
from EnumerationSets import *
sys.path.pop()
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

UMAA_SO_FileSystemStatus = idl.get_module("UMAA_SO_FileSystemStatus")

UMAA.SO.FileSystemStatus = UMAA_SO_FileSystemStatus

UMAA_SO_FileSystemStatus_FileSystemReportTypeTopic = "UMAA::SO::FileSystemStatus::FileSystemReportType"

UMAA.SO.FileSystemStatus.FileSystemReportTypeTopic = UMAA_SO_FileSystemStatus_FileSystemReportTypeTopic

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SO::FileSystemStatus::FileSystemReportType")],
    member_annotations = {
        'path': [idl.bound(1023)],
        'source': [idl.key, ],
    }
)
class UMAA_SO_FileSystemStatus_FileSystemReportType:
    availableInodes: Optional[idl.uint64] = None
    availableSpace: Optional[idl.uint64] = None
    freeInodes: Optional[idl.uint64] = None
    freeSpace: Optional[idl.uint64] = None
    inodes: Optional[idl.uint64] = None
    maxFilenameLength: Optional[idl.int32] = None
    path: str = ""
    reachable: bool = False
    _readOnly: Optional[bool] = None
    totalSpace: Optional[idl.uint64] = None
    timeStamp: UMAA.Common.Measurement.DateTime = field(default_factory = UMAA.Common.Measurement.DateTime)
    source: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SO.FileSystemStatus.FileSystemReportType = UMAA_SO_FileSystemStatus_FileSystemReportType
