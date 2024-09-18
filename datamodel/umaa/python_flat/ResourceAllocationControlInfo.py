
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from ResourceAllocationControlInfo.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/SO/ResourceAllocation/'))
from ResourceAllocationControlSession import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_SO = idl.get_module("UMAA_SO")

UMAA.SO = UMAA_SO

UMAA_SO_ResourceAllocation = idl.get_module("UMAA_SO_ResourceAllocation")

UMAA.SO.ResourceAllocation = UMAA_SO_ResourceAllocation

@idl.struct(
    type_annotations = [idl.type_name("UMAA::SO::ResourceAllocation::ResourceAllocationControlInfo")])
class UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo:
    controlSession: Optional[UMAA.SO.ResourceAllocation.ResourceAllocationControlSession] = None
    resourceID: UMAA.Common.IdentifierType = field(default_factory = UMAA.Common.IdentifierType)

UMAA.SO.ResourceAllocation.ResourceAllocationControlInfo = UMAA_SO_ResourceAllocation_ResourceAllocationControlInfo
