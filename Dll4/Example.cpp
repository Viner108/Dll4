#include "Example.h"
#include "pch.h"
#include <iostream>

extern "C" __declspec(dllexport) void hello() {
	std::cout << "Hello";
}