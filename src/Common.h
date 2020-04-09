#pragma once
#include "Windows.h"

namespace Common
{

template <typename T>
T read(DWORD addr)
{
	T ret = { 0 };
	__try {
		value = *(T*)(addr);
	}
	__except (1) {
		
	}
	return value;
}

template <typename T>
void write(DWORD addr, T value)
{
	DWORD len = sizeof(T), op;
	__try {
		VirtualProtect(addr, len, PAGE_EXECUTE_READWRITE, &op);
		memcpy(addr, &value, len);
		VirtualProtect(addr, len, op, &op);
