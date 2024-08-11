# ConditionalReport
The purpose of this service is to report the set of conditionals that have successfully been added for use during mission plan execution. Each conditional expresses a condition that can be evaluated to either true or false. They are used in both triggers and constraints. In triggers, conditionals are used as either a state transition trigger or a constraint trigger, which define the condition(s) that activate a state transition or constraint, respectively. In constraints, conditionals are used to define the condition(s) that must be upheld by the system during execution.

## Requests

## Responses
### reportConditional (ConditionalReportType)
This operation is used to provide the current set of conditionals for mission plan execution.
