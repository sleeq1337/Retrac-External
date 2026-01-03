#pragma once
#pragma once
#include <windows.h>
#include <winternl.h>
#include <process.h>
#include <tlhelp32.h>
#include <inttypes.h>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>
#include <chrono>
#include <sstream>
#include <d3d9.h>
#include "defs.h"
#pragma comment (lib, "d3d9.lib")


HANDLE DriverHandle;
uint64_t base_address;
HWND hwnd = NULL;
DWORD processID;


#define ctl_write    CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0366, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define ctl_read    CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0367, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define ctl_base    CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0368, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)

typedef struct info_t {
	int pid = 0;
	DWORD_PTR address;
	void* value;
	SIZE_T size;
	void* data;
}info, * p_info;


template <typename Type>
Type read(void* DriverHandle, unsigned long int Process_Identifier, unsigned long long int Address)
{
	info_t Input_Output_Data;

	Input_Output_Data.pid = Process_Identifier;

	Input_Output_Data.address = Address;

	Type Return_Value;

	Input_Output_Data.value = &Return_Value;

	Input_Output_Data.size = sizeof(Type);

	unsigned long int Readed_Bytes_Amount;

	DeviceIoControl(DriverHandle, ctl_read, &Input_Output_Data, sizeof Input_Output_Data, &Input_Output_Data, sizeof Input_Output_Data, &Readed_Bytes_Amount, nullptr);

	return *(Type*)&Return_Value;
}

void writefloat(unsigned long long int Address, float stuff)
{
	info_t Input_Output_Data;

	Input_Output_Data.pid = processID;

	Input_Output_Data.address = Address;

	Input_Output_Data.value = &stuff;

	Input_Output_Data.size = sizeof(float);

	unsigned long int Readed_Bytes_Amount;

	DeviceIoControl(DriverHandle, ctl_write, &Input_Output_Data, sizeof Input_Output_Data, &Input_Output_Data, sizeof Input_Output_Data, &Readed_Bytes_Amount, nullptr);
}

template<typename T>
void write(uintptr_t address, T value)
{
	info_t data{};
	data.pid = processID;
	data.address = address;
	data.value = &value;
	data.size = sizeof(T);

	DWORD bytes;
	DeviceIoControl(DriverHandle, ctl_write, &data, sizeof(data), &data, sizeof(data), &bytes, nullptr);
}

void writebool(uintptr_t Address, bool value)
{
	info_t data{};
	data.pid = processID;
	data.address = Address;
	data.value = &value;
	data.size = sizeof(bool);

	DWORD bytes;
	DeviceIoControl(DriverHandle, ctl_write, &data, sizeof(data), &data, sizeof(data), &bytes, nullptr);
}

void writedouble(unsigned long long int Address, double stuff)
{
	info_t Input_Output_Data;

	Input_Output_Data.pid = processID;

	Input_Output_Data.address = Address;

	Input_Output_Data.value = &stuff;

	Input_Output_Data.size = sizeof(double);

	unsigned long int Readed_Bytes_Amount;

	DeviceIoControl(DriverHandle, ctl_write, &Input_Output_Data, sizeof Input_Output_Data, &Input_Output_Data, sizeof Input_Output_Data, &Readed_Bytes_Amount, nullptr);
}