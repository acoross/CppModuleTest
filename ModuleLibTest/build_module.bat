pushd %~dp0

call build1.bat %1 module1
IF ERRORLEVEL 1 GOTO ERROR

call build1.bat %1 module2
IF ERRORLEVEL 1 GOTO ERROR

REM xcopy *.ifc %1

echo "module created"
popd
EXIT

:ERROR
echo "failed"
popd
EXIT