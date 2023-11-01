@echo off

FOR /R "." %%F IN (*.idl) DO (
	rtiddsgen -I %UMAA_HOME% -convertToXML %%F
)