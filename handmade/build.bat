@echo off

call "C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvarsall.bat" x64

mkdir ..\build
pushd ..\build
cl -FC -Zi ..\handmade\code\win32_handmade.cpp User32.lib Gdi32.lib
popd