# cppwinrt-19041-cpp20
Patched C++/WinRT headers in Windows SDK 10.0.19041.0 to use C++20

## Description
Windows SDK 10.0.19041.0 is shipped with an older C++/WinRT v2.0.190620.2 which uses experimental coroutine support in C++17. This makes it difficult for a C++20 project to use this version of Windows SDK.

I made a simple fix by adding the conditional includes used in C++/WinRT v2.0.201201.7.

## Usage
Simply replace the headers in the Windows SDK include directory (e.g. `C:\Program Files (x86)\Windows Kits\10\Include\10.0.19041.0\cppwinrt\winrt`). You would like to make a backup of the older files.

## License
This repo is under the MIT license, same as the original header files.