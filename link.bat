@echo off

openfiles > nul
if errorlevel 1 (
    PowerShell.exe -Command Start-Process \"%~f0\" -Verb runas
    exit
)

mklink /D opencv C:\tools\OpenCV-android-sdk\sdk