#ifndef UNICODE
#define UNICODE
#endif

#include <Windows.h>

#include <Include.hpp>
#include <print>

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow) {
    std::println(TEST_STRING);
}