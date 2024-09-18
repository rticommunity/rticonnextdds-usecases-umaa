
# WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

# This file was generated from DecimateStructureFilterType.idl
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
sys.path.append(os.path.join(os.path.dirname(__file__), 'UMAA/Common/Measurement/'))
from Measurements import *
sys.path.pop()

UMAA = idl.get_module("UMAA")

UMAA_CO = idl.get_module("UMAA_CO")

UMAA.CO = UMAA_CO

UMAA_CO_Filter = idl.get_module("UMAA_CO_Filter")

UMAA.CO.Filter = UMAA_CO_Filter

@idl.struct(
    type_annotations = [idl.type_name("UMAA::CO::Filter::DecimateStructureFilterType")])
class UMAA_CO_Filter_DecimateStructureFilterType:
    setSendMostRecent: bool = False
    waitTime: float = 0.0

UMAA.CO.Filter.DecimateStructureFilterType = UMAA_CO_Filter_DecimateStructureFilterType