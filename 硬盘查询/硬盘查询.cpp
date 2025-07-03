// ConsoleApplication2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <windows.h>
#include <iostream>

void ListDrives() {
    wchar_t drives[512] = { 0 };

    DWORD size = GetLogicalDriveStringsW(512, drives);
    if (size == 0) {
        std::wcout << L"[-] 获取逻辑驱动器失败！" << std::endl;
        return;
    }

    wchar_t* drive = drives;
    while (*drive) {
        std::wcout << L"[+] 发现盘符: " << drive << std::endl;
        UINT type = GetDriveTypeW(drive);
        switch (type) {
        case DRIVE_FIXED: std::wcout << L"固定硬盘\n"; break;
        case DRIVE_REMOVABLE: std::wcout << L"可移动设备\n"; break;
        case DRIVE_CDROM: std::wcout << L"光驱\n"; break;
        case DRIVE_REMOTE: std::wcout << L"网络驱动器\n"; break;
        default: std::wcout << L"其他类型\n"; break;
        }

        drive += wcslen(drive) + 1; // 下一个字符串
    }
}
int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::locale::global(std::locale(""));
    ListDrives();
}
/*
GetLogicalDriveStringsW  // 获取实际盘符
GetDiskFreeSpaceExW      // 获取容量

*/
