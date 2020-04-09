#include "pch.h"
#include "Common.h"

void Common::write(DWORD addr, BYTE* bytes, DWORD len) 
{
	DWORD op = { 0 };
	__try {
		VirtualProtect((LPVOID)addr, len, PAGE_EXECUTE_READWRITE, &op);
		memcpy((void*)addr, (void*)&bytes, len);
		VirtualProtect((LPVOID)addr, len, op, &op);
	}
	__except (1) {

	}
}
