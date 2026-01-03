// hello paster!
// You can do everything you want with this source
// if you want to sell this you are clown.
// 
// 
// if you want to put this as free cheat, just credit me in menu, in watermark idk. 
// made by sleeq and thats it

#undef WIN32_LEAN_AND_MEAN
#define NOMINMAX
#define SECURITY_WIN32
#include <windows.h>
#include <winuser.h>
#include <winbase.h>
#include <winnt.h>
#include <winternl.h>
#include <processthreadsapi.h>
#include <handleapi.h>
#include <memoryapi.h>
#include <synchapi.h>
#include <tlhelp32.h>
#include <psapi.h>
#include <dbghelp.h>
#include <shlobj.h>
#include <shlwapi.h>
#include <shellapi.h>
#include <combaseapi.h>
#include <objbase.h>
#include <dwmapi.h>
#include <dxgi.h>
#include <wingdi.h>
#include <winreg.h>
#include <wincon.h>
#include <winerror.h>
#include <winioctl.h>
#include <ntstatus.h>
#include <bcrypt.h>
#include <wincrypt.h>
#include <d3d9.h>
#include <d3d9types.h>
#include <d3d9caps.h>
#include <iostream> // STL
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <array>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <algorithm>
#include <numeric>
#include <functional>
#include <memory>
#include <utility>
#include <type_traits>
#include <cstdint>
#include <cstddef>
#include <climits>
#include <cmath>
#include <ctime>
#include <chrono>
#include <thread>
#include <mutex>
#include <atomic>
#include <condition_variable>
#include <future>
#include <exception>
#include <stdexcept>
#include <iomanip>
#include <codecvt>
#include <locale>
#include <cctype>
#include <cwctype>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <direct.h>    
#include <io.h>         
#include <fcntl.h>
#include <sys/stat.h>
#include "sdk.h"
#include "d3d9_x.h"
#include "xor.hpp"
#include "imgui/imgui.h"
#include "imgui/imgui_internal.h"
#include <objidl.h>
#include <unknwn.h>
#include <d3dcommon.h>
#include <dwrite.h>
#include <dxgidebug.h>
#include <dxgiformat.h>
#include <dxgitype.h>
#include <iphlpapi.h>
#include <icmpapi.h>
#include <winhttp.h>
#include <urlmon.h>
#include <wininet.h>
#include <commdlg.h>
#include <commctrl.h>
#include <richedit.h>
#include <strsafe.h>
#include <sddl.h>
#include <accctrl.h>
#include <aclapi.h>
#include <userenv.h>
#include <lm.h>
#include <winspool.h>
#include <winusb.h>
#include <hidsdi.h>
#include <setupapi.h>
#include <cfgmgr32.h>
#include <wtsapi32.h>
#include <powrprof.h>
#include <knownfolders.h>
#include <shobjidl.h>
#include <uxtheme.h>
#include <propkey.h>
#include <propvarutil.h>
#include <shlguid.h>
#include <netfw.h>
#include <appmodel.h>
#include <security.h>
#include <wincred.h>
#include <softpub.h>
#include <wintrust.h>
#include <mscat.h>
#include <bcrypt.h>
#include <crtdefs.h>
#include <wchar.h>
#include <stdlib.h>
#include <stdio.h>
#include <process.h>
#include <share.h>
#include <sys/types.h>
#include <sys/timeb.h>
#include <timeapi.h>
#include <mmreg.h>
#include <mmsystem.h>
#include <wingdi.h>
#include <winsafer.h>
#include <psapi.h>
#include <tlhelp32.h>
#include <dbt.h>
#include <winperf.h>
#include <comdef.h>
#include <Wbemidl.h>
#include "offsets.h"
#include "namespace.h"
#include <windows.h>
#include <setupapi.h>
#include <devguid.h>
#include <intrin.h>
#include <iphlpapi.h>
#include "Driver.h"
#pragma comment(lib, "setupapi.lib")
#pragma comment(lib, "iphlpapi.lib")
#pragma comment(lib, "Setupapi.lib")
#pragma comment(lib, "Iphlpapi.lib")
#pragma comment(lib, "wbemuuid.lib")
SIZE_T getCurrentMemoryUsage()
{
	PROCESS_MEMORY_COUNTERS_EX pmc;
	if (GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc, sizeof(pmc)))
	{
		return pmc.WorkingSetSize;
	}
	return 0;
}
ImU32 Float3ToImU32(const float rgb[3], uint8_t alpha = 255)
{
	return IM_COL32(
		static_cast<int>(rgb[0] * 255.0f),
		static_cast<int>(rgb[1] * 255.0f),
		static_cast<int>(rgb[2] * 255.0f),
		alpha
	);
}
extern uintptr_t g_BaseAddress;
extern HANDLE g_hProcess;

uintptr_t g_BaseAddress = 0;
HANDLE g_hProcess = nullptr;
#define UOffsetWorld = 49 20 50 61 73 74 65
ImFont* m_pFont;
DWORD_PTR Uworld;
DWORD_PTR LocalPawn;
DWORD_PTR PlayerState;
DWORD_PTR Localplayer;
DWORD_PTR Rootcomp;
DWORD_PTR Mesh;
DWORD_PTR PlayerController;
DWORD_PTR Persistentlevel;
DWORD_PTR IPaste;
Vector3 localactorpos;
uint64_t TargetPawn;
int localplayerID;
RECT GameRect = { NULL };
D3DPRESENT_PARAMETERS d3dpp;
DWORD ScreenCenterX;
DWORD ScreenCenterY;
static void xCreateWindow();
static void xInitD3d();
static void xMainLoop();
static void xShutdown();
static LRESULT CALLBACK WinProc(HWND hWnd, UINT Message, WPARAM wParam, LPARAM lParam);
extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
static HWND Window = NULL;
IDirect3D9Ex* p_Object = NULL;
static LPDIRECT3DDEVICE9 D3dDevice = NULL;
static LPDIRECT3DVERTEXBUFFER9 TriBuf = NULL;
DWORD GetProcessIDByName(const char* processName) {
	PROCESSENTRY32 entry;
	entry.dwSize = sizeof(PROCESSENTRY32);
	DWORD pid = 0;

	HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (snapshot != INVALID_HANDLE_VALUE) {
		if (Process32First(snapshot, &entry)) {
			do {
				if (_stricmp(entry.szExeFile, processName) == 0) {
					pid = entry.th32ProcessID;
					break;
				}
			} while (Process32Next(snapshot, &entry));
		}
		CloseHandle(snapshot);
	}
	return pid;
}
BOOL CALLBACK EnumWindowsProcMy(HWND hwndEnum, LPARAM lParam) {
	DWORD pid;
	GetWindowThreadProcessId(hwndEnum, &pid);
	if (pid == (DWORD)lParam) {
		hwnd = hwndEnum;
		return FALSE;
	}
	return TRUE;
}



namespace misc
{
	bool g_VSync = false;
	bool g_Streamproof = false;
	std::chrono::steady_clock::time_point g_CheatStartTime;
	HWND g_OverlayWindow = nullptr;
	bool g_DiscordRPCEnabled = false;

	bool ShowMenu = false;
	bool debug = false;
}


namespace circle {
	int Width = GetSystemMetrics(SM_CXSCREEN);
	int Height = GetSystemMetrics(SM_CYSCREEN);

	int ScreenCenterX = Width / 2;
	int ScreenCenterY = Height / 2;

}

namespace Visuals
{
	bool Enable = true;
	bool Distance = false;
	bool visInfo = false;
	bool WeaponName = true;
	bool SkipTeam = false;
	bool Box = false;
	bool CronerBox = false;
	bool FilledBox = false;
	bool Snaplines = false;
	enum class SnaplineFrom
	{
		Top,
		Center,
		Bottom
	};

	inline SnaplineFrom SnaplineStart = SnaplineFrom::Bottom;
	bool Skeleton = false;
	bool OverlayFPS = true;
	float VisDist = 500;

}



namespace Aimbot
{

	bool Enable = true;
	bool DrawCircle = false;
	bool DrawFilledCircle = false;
	bool g_VisibleCheck = false;
	float AimFOV = 100;
	float Distance = 100;
	float Smooth = 1;
	int aimkey = VK_RBUTTON;
	static int hitbox;
	static int aimkeypos = 3;
	static int hitboxpos = 0;

}
namespace Crosshair
{
	float g_CrosshairColor[3] = { 251.0f / 255.0f, 67.0f / 255.0f, 67.0f / 255.0f };
	bool g_ShowColorPicker = false;
	bool g_DrawCrosshair = false;
	bool g_CrosshairShape = false;
	bool g_CenterDot = false;
	float g_CrosshairLength = 10.0f;
	float g_CrosshairThickness = 1.5f;
	float g_CrosshairDotSize = 3.0f;
}

namespace g_Colors
{
	using ImVec3 = struct ImVec3;
	float vis_Distance[3] = { 0.0f, 1.0f, 0.0f };
	float vis_visInfo[3] = { 0.0f, 1.0f, 0.0f };
	float vis_Box[3] = { 251.0f / 255.0f, 67.0f / 255.0f, 67.0f / 255.0f };
	float vis_CronerBox[3] = { 251.0f / 255.0f, 67.0f / 255.0f, 67.0f / 255.0f };
	float vis_FilledBox[3] = { 251.0f / 255.0f, 67.0f / 255.0f, 67.0f / 255.0f };
	float vis_Snaplines[3] = { 251.0f / 255.0f, 67.0f / 255.0f, 67.0f / 255.0f };
	inline float vis_WeaponName[3] = { 0.0f, 1.0f, 0.0f };

	inline float WeaponName[3] = { 251.0f / 255.0f, 67.0f / 255.0f, 67.0f / 255.0f };
	float Distance[3] = { 251.0f / 255.0f, 67.0f / 255.0f, 67.0f / 255.0f };
	float visInfo[3] = { 251.0f / 255.0f, 67.0f / 255.0f, 67.0f / 255.0f };
	float Box[3] = { 251.0f / 255.0f, 67.0f / 255.0f, 67.0f / 255.0f };
	float CronerBox[3] = { 251.0f / 255.0f, 67.0f / 255.0f, 67.0f / 255.0f };
	float FilledBox[3] = { 251.0f / 255.0f, 67.0f / 255.0f, 67.0f / 255.0f };
	float Snaplines[3] = { 251.0f / 255.0f, 67.0f / 255.0f, 67.0f / 255.0f };
}



namespace settings
{
	int TextSize = 18;
	float BoxHeight = 0.380f;
	float BoxWidth = 0.60f;

	bool usafeFeatures = false;
}

namespace radar
{
	bool radar = false;
	float range = 100.f;
}
namespace exploits
{
	bool FastReload = false;

	bool nospread = false;

	bool g_rapidFire = false;
	float RapiValue = 1.f;

	bool magicbullet = false;
	bool magicreset = false;



}



DWORD Menuthread(LPVOID in)
{
	while (1)
	{

		if (GetAsyncKeyState(VK_UP) & 1) {
			misc::ShowMenu = !misc::ShowMenu;
		}
		Sleep(150);
	}
}
FTransform GetBoneIndex(DWORD_PTR mesh, int index)
{
	DWORD_PTR bonearray;
	bonearray = read<DWORD_PTR>(DriverHandle, processID, mesh + Game::bonearray);
	if (bonearray == NULL)
	{
		bonearray = read<DWORD_PTR>(DriverHandle, processID, mesh + 0x488 + 0x10);
	}
	return read<FTransform>(DriverHandle, processID, bonearray + (index * 0x30));

}
std::string GetWeaponName(uintptr_t Player) {
	std::string weapon_name;

	uint64_t current_weapon = read<uint64_t>(DriverHandle, processID, Player + offsets::CurrentWeapon);
	uint64_t weapon_data = read<uint64_t>(DriverHandle, processID, current_weapon + offsets::weapon_data);
	uint64_t item_name = read<uint64_t>(DriverHandle, processID, weapon_data + 0x40);

	uint64_t FData = read<uint64_t>(DriverHandle, processID, item_name + 0x20);
	int FLength = read<int>(DriverHandle, processID, item_name + 0x28);

	if (FLength > 0 && FLength < 50)
	{
		std::wstring wstr_buf;
		wstr_buf.reserve(FLength);

		for (int i = 0; i < FLength; ++i)
		{
			wchar_t ch = read<wchar_t>(DriverHandle, processID, FData + i * sizeof(wchar_t));
			wstr_buf += ch;
		}

		weapon_name.assign(wstr_buf.begin(), wstr_buf.end());
	}

	return weapon_name;
}

Vector3 GetBoneWithRotation(DWORD_PTR mesh, int id)
{
	FTransform bone = GetBoneIndex(mesh, id);
	FTransform ComponentToWorld = read<FTransform>(DriverHandle, processID, mesh + Game::ComponentToWorld);
	D3DMATRIX Matrix;

	Matrix = MatrixMultiplication(bone.ToMatrixWithScale(), ComponentToWorld.ToMatrixWithScale());

	return Vector3(Matrix._41, Matrix._42, Matrix._43);
}

D3DMATRIX Matrix(Vector3 rot, Vector3 origin = Vector3(0, 0, 0))
{
	float radPitch = (rot.x * float(M_PI) / 180.f);
	float radYaw = (rot.y * float(M_PI) / 180.f);
	float radRoll = (rot.z * float(M_PI) / 180.f);

	float SP = sinf(radPitch);
	float CP = cosf(radPitch);
	float SY = sinf(radYaw);
	float CY = cosf(radYaw);
	float SR = sinf(radRoll);
	float CR = cosf(radRoll);

	D3DMATRIX matrix;
	matrix.m[0][0] = CP * CY;
	matrix.m[0][1] = CP * SY;
	matrix.m[0][2] = SP;
	matrix.m[0][3] = 0.f;

	matrix.m[1][0] = SR * SP * CY - CR * SY;
	matrix.m[1][1] = SR * SP * SY + CR * CY;
	matrix.m[1][2] = -SR * CP;
	matrix.m[1][3] = 0.f;

	matrix.m[2][0] = -(CR * SP * CY + SR * SY);
	matrix.m[2][1] = CY * SR - CR * SP * SY;
	matrix.m[2][2] = CR * CP;
	matrix.m[2][3] = 0.f;

	matrix.m[3][0] = origin.x;
	matrix.m[3][1] = origin.y;
	matrix.m[3][2] = origin.z;
	matrix.m[3][3] = 1.f;

	return matrix;
}
Vector3 ProjectWorldToScreen(Vector3 WorldLocation)
{
	Vector3 Screenlocation = Vector3(0, 0, 0);
	Vector3 Camera;

	auto chain69 = read<uintptr_t>(DriverHandle, processID, Localplayer + Game::chain69);
	uint64_t chain699 = read<uintptr_t>(DriverHandle, processID, chain69 + 8);

	Camera.x = read<float>(DriverHandle, processID, chain699 + Game::CameraX);
	Camera.y = read<float>(DriverHandle, processID, Rootcomp + Game::CameraY);

	float test = asin(Camera.x);
	float degrees = test * (180.0 / M_PI);
	Camera.x = degrees;

	if (Camera.y < 0)
		Camera.y = 360 + Camera.y;

	D3DMATRIX tempMatrix = Matrix(Camera);
	Vector3 vAxisX, vAxisY, vAxisZ;

	vAxisX = Vector3(tempMatrix.m[0][0], tempMatrix.m[0][1], tempMatrix.m[0][2]);
	vAxisY = Vector3(tempMatrix.m[1][0], tempMatrix.m[1][1], tempMatrix.m[1][2]);
	vAxisZ = Vector3(tempMatrix.m[2][0], tempMatrix.m[2][1], tempMatrix.m[2][2]);



	uint64_t chain = read<uint64_t>(DriverHandle, processID, Localplayer + Game::chain);
	uint64_t chain1 = read<uint64_t>(DriverHandle, processID, chain + Game::chain1);
	uint64_t chain2 = read<uint64_t>(DriverHandle, processID, chain1 + Game::chain2);

	Vector3 vDelta = WorldLocation - read<Vector3>(DriverHandle, processID, chain2 + 0x10);
	Vector3 vTransformed = Vector3(vDelta.Dot(vAxisY), vDelta.Dot(vAxisZ), vDelta.Dot(vAxisX));

	if (vTransformed.z < 1.f)
		vTransformed.z = 1.f;

	float zoom = read<float>(DriverHandle, processID, chain699 + Game::zoom);

	float FovAngle = 80.0f / (zoom / 1.19f);

	float ScreenCenterX = Width / 2.0f;
	float ScreenCenterY = Height / 2.0f;

	Screenlocation.x = ScreenCenterX + vTransformed.x * (ScreenCenterX / tanf(FovAngle * (float)M_PI / 360.f)) / vTransformed.z;
	Screenlocation.y = ScreenCenterY - vTransformed.y * (ScreenCenterX / tanf(FovAngle * (float)M_PI / 360.f)) / vTransformed.z;

	return Screenlocation;
}

bool IsVisible(uintptr_t mesh)
{
	float LastSubmitTime = read<float>(DriverHandle, processID, mesh + 0x278);
	float LastRenderTimeOnScreen = read<float>(DriverHandle, processID, mesh + 0x280);
	return LastRenderTimeOnScreen + 0.06f >= LastSubmitTime;
}


void DrawStrokeText(int x, int y, const char* str)
{
	ImFont a;
	std::string utf_8_1 = std::string(str);
	std::string utf_8_2 = string_To_UTF8(utf_8_1);

	ImGui::GetOverlayDrawList()->AddText(ImVec2(x, y - 1), ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 255.0, 1 / 255.0, 1 / 255.0, 255 / 255.0)), utf_8_2.c_str());
	ImGui::GetOverlayDrawList()->AddText(ImVec2(x, y + 1), ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 255.0, 1 / 255.0, 1 / 255.0, 255 / 255.0)), utf_8_2.c_str());
	ImGui::GetOverlayDrawList()->AddText(ImVec2(x - 1, y), ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 255.0, 1 / 255.0, 1 / 255.0, 255 / 255.0)), utf_8_2.c_str());
	ImGui::GetOverlayDrawList()->AddText(ImVec2(x + 1, y), ImGui::ColorConvertFloat4ToU32(ImVec4(1 / 255.0, 1 / 255.0, 1 / 255.0, 255 / 255.0)), utf_8_2.c_str());
	ImGui::GetOverlayDrawList()->AddText(ImVec2(x, y), ImGui::ColorConvertFloat4ToU32(ImVec4(255, 255, 255, 255)), utf_8_2.c_str());
}

float DrawOutlinedText(ImFont* pFont, const std::string& text, const ImVec2& pos, float size, ImU32 color, bool center)
{
	std::stringstream stream(text);
	std::string line;

	float y = 0.0f;
	int i = 0;

	while (std::getline(stream, line))
	{
		ImVec2 textSize = pFont->CalcTextSizeA(size, FLT_MAX, 0.0f, line.c_str());

		if (center)
		{
			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2((pos.x - textSize.x / 2.0f) + 1, (pos.y + textSize.y * i) + 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), line.c_str());
			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2((pos.x - textSize.x / 2.0f) - 1, (pos.y + textSize.y * i) - 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), line.c_str());
			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2((pos.x - textSize.x / 2.0f) + 1, (pos.y + textSize.y * i) - 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), line.c_str());
			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2((pos.x - textSize.x / 2.0f) - 1, (pos.y + textSize.y * i) + 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), line.c_str());

			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2(pos.x - textSize.x / 2.0f, pos.y + textSize.y * i), ImGui::GetColorU32(color), line.c_str());
		}
		else
		{
			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2((pos.x) + 1, (pos.y + textSize.y * i) + 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), line.c_str());
			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2((pos.x) - 1, (pos.y + textSize.y * i) - 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), line.c_str());
			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2((pos.x) + 1, (pos.y + textSize.y * i) - 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), line.c_str());
			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2((pos.x) - 1, (pos.y + textSize.y * i) + 1), ImGui::GetColorU32(ImVec4(0, 0, 0, 255)), line.c_str());

			ImGui::GetOverlayDrawList()->AddText(pFont, size, ImVec2(pos.x, pos.y + textSize.y * i), ImGui::GetColorU32(color), line.c_str());
		}

		y = pos.y + textSize.y * (i + 1);
		i++;
	}
	return y;
}

void DrawText1(int x, int y, const char* str, RGBA* color)
{
	ImFont a;
	std::string utf_8_1 = std::string(str);
	std::string utf_8_2 = string_To_UTF8(utf_8_1);
	ImGui::GetOverlayDrawList()->AddText(ImVec2(x, y), ImGui::ColorConvertFloat4ToU32(ImVec4(color->R / 255.0, color->G / 255.0, color->B / 255.0, color->A / 255.0)), utf_8_2.c_str());
}

void DrawLine(int x1, int y1, int x2, int y2, RGBA* color, int thickness)
{
	ImGui::GetOverlayDrawList()->AddLine(ImVec2(x1, y1), ImVec2(x2, y2), ImGui::ColorConvertFloat4ToU32(ImVec4(color->R / 255.0, color->G / 255.0, color->B / 255.0, color->A / 255.0)), thickness);
}

void DrawCircle(int x, int y, int radius, RGBA* color, int segments, float thickness = 1.0f)
{
	ImU32 imColor = ImGui::ColorConvertFloat4ToU32(
		ImVec4(
			color->R / 255.0f,
			color->G / 255.0f,
			color->B / 255.0f,
			color->A / 255.0f
		)
	);
	ImGui::GetOverlayDrawList()->AddCircle(ImVec2((float)x, (float)y), (float)radius, imColor, segments, thickness);
}
void DrawCrosshair()
{
	if (!Crosshair::g_DrawCrosshair)
		return;

	ImDrawList* draw_list = ImGui::GetOverlayDrawList();

	ImVec2 center = ImVec2(
		(float)GetSystemMetrics(SM_CXSCREEN) * 0.5f,
		(float)GetSystemMetrics(SM_CYSCREEN) * 0.5f
	);

	ImU32 col = IM_COL32(
		(int)(Crosshair::g_CrosshairColor[0] * 255.0f),
		(int)(Crosshair::g_CrosshairColor[1] * 255.0f),
		(int)(Crosshair::g_CrosshairColor[2] * 255.0f),
		255
	);

	float L = Crosshair::g_CrosshairLength;
	float T = Crosshair::g_CrosshairThickness;
	float D = Crosshair::g_CenterDot;

	if (Crosshair::g_CrosshairShape)
	{
		draw_list->AddLine(ImVec2(center.x - L, center.y - L), ImVec2(center.x + L, center.y + L), col, T);
		draw_list->AddLine(ImVec2(center.x + L, center.y - L), ImVec2(center.x - L, center.y + L), col, T);
	}
	else
	{
		draw_list->AddLine(ImVec2(center.x - L, center.y), ImVec2(center.x + L, center.y), col, T);
		draw_list->AddLine(ImVec2(center.x, center.y - L), ImVec2(center.x, center.y + L), col, T);
	}

	if (Crosshair::g_CenterDot && D > 0.0f)
	{
		draw_list->AddCircleFilled(center, D, col);
	}
}
void DrawBox(float X, float Y, float W, float H, RGBA* color)
{
	auto drawList = ImGui::GetOverlayDrawList();

	drawList->AddRect(
		ImVec2(X - 1, Y - 1),
		ImVec2(X + W + 1, Y + H + 1),
		IM_COL32(0, 0, 0, 255),
		0.0f,
		0,
		1.0f
	);

	drawList->AddRect(
		ImVec2(X, Y),
		ImVec2(X + W, Y + H),
		ImGui::ColorConvertFloat4ToU32(ImVec4(
			color->R / 255.0f,
			color->G / 255.0f,
			color->B / 255.0f,
			color->A / 255.0f
		)),
		0.0f,
		0,
		1.0f
	);
}

void DrawFilledBox(float X, float Y, float W, float H, ImU32 color)
{
	ImGui::GetOverlayDrawList()->AddRectFilled(
		ImVec2(X, Y),
		ImVec2(X + W, Y + H),
		color
	);
}

void DrawCorner(float x, float y, float w, float h, ImU32 color, float thickness)
{
	auto draw = ImGui::GetOverlayDrawList();
	ImU32 outlineColor = IM_COL32(0, 0, 0, 255);
	float lineLength = w / 4.0f;


	draw->AddLine(ImVec2(x - 1, y - 1), ImVec2(x + lineLength - 1, y - 1), outlineColor, thickness + 1.0f);
	draw->AddLine(ImVec2(x - 1, y - 1), ImVec2(x - 1, y + lineLength - 1), outlineColor, thickness + 1.0f);

	draw->AddLine(ImVec2(x + w + 1, y - 1), ImVec2(x + w - lineLength + 1, y - 1), outlineColor, thickness + 1.0f);
	draw->AddLine(ImVec2(x + w + 1, y - 1), ImVec2(x + w + 1, y + lineLength - 1), outlineColor, thickness + 1.0f);

	draw->AddLine(ImVec2(x - 1, y + h + 1), ImVec2(x + lineLength - 1, y + h + 1), outlineColor, thickness + 1.0f);
	draw->AddLine(ImVec2(x - 1, y + h + 1), ImVec2(x - 1, y + h - lineLength + 1), outlineColor, thickness + 1.0f);

	draw->AddLine(ImVec2(x + w + 1, y + h + 1), ImVec2(x + w - lineLength + 1, y + h + 1), outlineColor, thickness + 1.0f);
	draw->AddLine(ImVec2(x + w + 1, y + h + 1), ImVec2(x + w + 1, y + h - lineLength + 1), outlineColor, thickness + 1.0f);

	draw->AddLine(ImVec2(x, y), ImVec2(x + lineLength, y), color, thickness);
	draw->AddLine(ImVec2(x, y), ImVec2(x, y + lineLength), color, thickness);

	draw->AddLine(ImVec2(x + w, y), ImVec2(x + w - lineLength, y), color, thickness);
	draw->AddLine(ImVec2(x + w, y), ImVec2(x + w, y + lineLength), color, thickness);

	draw->AddLine(ImVec2(x, y + h), ImVec2(x + lineLength, y + h), color, thickness);
	draw->AddLine(ImVec2(x, y + h), ImVec2(x, y + h - lineLength), color, thickness);

	draw->AddLine(ImVec2(x + w, y + h), ImVec2(x + w - lineLength, y + h), color, thickness);
	draw->AddLine(ImVec2(x + w, y + h), ImVec2(x + w, y + h - lineLength), color, thickness);
}





void DrawBox2(int X, int Y, int W, int H, const ImU32& color, int thickness)
{
	ImGui::GetOverlayDrawList()->AddRect(
		ImVec2(X, Y),
		ImVec2(X + W, Y + H),
		color,
		0.0f,
		0,
		thickness
	);
}


std::string GetGNamesByObjID(int32_t ObjectID)
{
	uint64_t gname = read<uint64_t>(DriverHandle, processID, base_address + 0x091D5140);


	int64_t fNamePtr = read<uint64_t>(DriverHandle, processID, gname + int(ObjectID / 0x4000) * 0x8);
	int64_t fName = read<uint64_t>(DriverHandle, processID, fNamePtr + int(ObjectID % 0x4000) * 0x8);

	char pBuffer[64] = { NULL };

	info_t blyat;
	blyat.pid = processID;
	blyat.address = fName + 0x10;
	blyat.value = &pBuffer;
	blyat.size = sizeof(pBuffer);

	unsigned long int asd;
	DeviceIoControl(DriverHandle, ctl_read, &blyat, sizeof blyat, &blyat, sizeof blyat, &asd, nullptr);

	return std::string(pBuffer);
}


typedef struct _FNlEntity
{
	uint64_t Actor;
	int ID;
	uint64_t mesh;
}FNlEntity;

std::vector<FNlEntity> entityList;


void cache()
{
	while (true)
	{
		std::vector<FNlEntity> tmpList;

		Uworld = read<DWORD_PTR>(DriverHandle, processID, base_address + offsets::uworld);
		DWORD_PTR Gameinstance = read<DWORD_PTR>(DriverHandle, processID, Uworld + offsets::Gameinstance);
		DWORD_PTR LocalPlayers = read<DWORD_PTR>(DriverHandle, processID, Gameinstance + offsets::LocalPlayers);
		Localplayer = read<DWORD_PTR>(DriverHandle, processID, LocalPlayers);
		PlayerController = read<DWORD_PTR>(DriverHandle, processID, Localplayer + offsets::PlayerController);
		LocalPawn = read<DWORD_PTR>(DriverHandle, processID, PlayerController + offsets::LocalPawn);

		PlayerState = read<DWORD_PTR>(DriverHandle, processID, LocalPawn + offsets::PlayerState);
		Rootcomp = read<DWORD_PTR>(DriverHandle, processID, LocalPawn + offsets::Rootcomp);

		if (LocalPawn != 0) {
			localplayerID = read<int>(DriverHandle, processID, LocalPawn + 0x18);

			if (misc::debug)
				std::cout << localplayerID << std::endl;
		}


		Persistentlevel = read<DWORD_PTR>(DriverHandle, processID, Uworld + offsets::Persistentlevel);
		DWORD ActorCount = read<DWORD>(DriverHandle, processID, Persistentlevel + offsets::ActorCount);
		DWORD_PTR AActors = read<DWORD_PTR>(DriverHandle, processID, Persistentlevel + offsets::AActors);

		for (int i = 0; i < ActorCount; i++)
		{
			uint64_t CurrentActor = read<uint64_t>(DriverHandle, processID, AActors + i * 0x8);

			int curactorid = read<int>(DriverHandle, processID, CurrentActor + 0x18);

			std::string test = GetGNamesByObjID(curactorid);
			std::cout << test << std::endl;

			if (curactorid == localplayerID || curactorid == localplayerID + 765)
			{
				FNlEntity fnlEntity{ };
				fnlEntity.Actor = CurrentActor;
				fnlEntity.mesh = read<uint64_t>(DriverHandle, processID, CurrentActor + offsets::mesh);
				fnlEntity.ID = curactorid;
				tmpList.push_back(fnlEntity);
			}
		}
		entityList = tmpList;

	}
}

int main(int argc, const char* argv[])
{
	misc::g_CheatStartTime = std::chrono::steady_clock::now();

	CreateThread(NULL, NULL, Menuthread, NULL, NULL, NULL);
	DriverHandle = CreateFileW((L"\\\\.\\NvidiaGFXTRC"), GENERIC_READ, 0, nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr);

	if (DriverHandle == INVALID_HANDLE_VALUE)
	{
		XorS(NotLoaded, "Kernel Not Loaded\n");
		XorS(YnOption, "Do You want To Load it Now? [Y/N]\n");
		printf(NotLoaded.decrypt());
		printf(YnOption.decrypt());

		char input;
		input = getchar();

		while (isspace(input)) {
			input = getchar();
		}

		if (tolower(input) == 'y') {
			printf("Loading kernel...\n");

		}
		else if (tolower(input) == 'n') {
			printf("Operation cancelled.\n");
			exit(0);
		}
		else {
			printf("Invalid option. Please enter Y or N.\n");
		}

		return 0;

		Sleep(2000);
		exit(0);
	}

	std::cout << "1) Retrac\n";
	std::cout << "2) Reboot\n";
	std::cout << "Choose option: ";

	int choice = 0;

	std::cin >> choice;

	switch (choice) {
	case 1:
		std::cout << "You selected Retrac...\n";
		while (hwnd == NULL)
		{
			SetConsoleTitle("Retrac ");
			printf("Waiting for Fortnite...");
			Sleep(50);
			system("cls");
			MessageBoxA(NULL, "Press OK", "EpicGames", MB_OK);
			XorS(proc, "FortniteClient-Win64-Shipping.exe");
			DWORD pid = GetProcessIDByName(proc.decrypt());

			if (pid) {
				EnumWindows(EnumWindowsProcMy, (LPARAM)pid);
			}

			Sleep(100);
		}
		GetWindowThreadProcessId(hwnd, &processID);
		break;

	case 2:
		std::cout << "You selected Reboot...\n";
		while (hwnd == NULL)
		{
			SetConsoleTitle("Reboot");
			printf("Waiting for Fortnite...");
			Sleep(50);
			system("cls");
			MessageBoxA(NULL, "Press OK", "EpicGames", MB_OK);
			XorS(wind, "Fortnite  ");
			hwnd = FindWindowA(0, wind.decrypt());
			Sleep(100);
		}
		GetWindowThreadProcessId(hwnd, &processID);

		break;

	default:
		std::cout << "Invalid option!\n";
		break;
	}

	info_t Input_Output_Data;
	Input_Output_Data.pid = processID;
	unsigned long int Readed_Bytes_Amount;

	DeviceIoControl(DriverHandle, ctl_base, &Input_Output_Data, sizeof Input_Output_Data, &Input_Output_Data, sizeof Input_Output_Data, &Readed_Bytes_Amount, nullptr);
	base_address = (unsigned long long int)Input_Output_Data.data;

	XorS(base, "Process base address: %p.\n");
	printf(base.decrypt(), (void*)base_address);

	xCreateWindow();
	xInitD3d();

	HANDLE handle = CreateThread(nullptr, NULL, reinterpret_cast<LPTHREAD_START_ROUTINE>(cache), nullptr, NULL, nullptr);
	CloseHandle(handle);

	xMainLoop();
	xShutdown();

	return 0;
}


const MARGINS Margin = { -1 };

void xCreateWindow()
{

	WNDCLASSEX wc;
	ZeroMemory(&wc, sizeof(wc));
	wc.cbSize = sizeof(wc);
	wc.lpszClassName = "Crosshair";

	wc.lpfnWndProc = WinProc;
	RegisterClassEx(&wc);
	if (hwnd)
	{
		GetClientRect(hwnd, &GameRect);
		POINT xy;
		ClientToScreen(hwnd, &xy);
		GameRect.left = xy.x;
		GameRect.top = xy.y;

		Width = GameRect.right;
		Height = GameRect.bottom;
	}
	else
		exit(2);
	Window = CreateWindowEx(NULL, "Crosshair", "Crosshair1", WS_POPUP | WS_VISIBLE, 0, 0, Width, Height, 0, 0, 0, 0);

	DwmExtendFrameIntoClientArea(Window, &Margin);
	SetWindowLong(Window, GWL_EXSTYLE, WS_EX_TRANSPARENT | WS_EX_TOOLWINDOW | WS_EX_LAYERED);
	ShowWindow(Window, SW_SHOW);
	UpdateWindow(Window);

}

void xInitD3d()
{
	if (FAILED(Direct3DCreate9Ex(D3D_SDK_VERSION, &p_Object)))
		exit(3);

	ZeroMemory(&d3dpp, sizeof(d3dpp));
	d3dpp.BackBufferWidth = Width;
	d3dpp.BackBufferHeight = Height;
	d3dpp.BackBufferFormat = D3DFMT_A8R8G8B8;
	d3dpp.MultiSampleQuality = D3DMULTISAMPLE_NONE;
	d3dpp.AutoDepthStencilFormat = D3DFMT_UNKNOWN;
	d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
	d3dpp.EnableAutoDepthStencil = FALSE;
	d3dpp.hDeviceWindow = Window;
	d3dpp.Windowed = TRUE;
	d3dpp.PresentationInterval = D3DPRESENT_INTERVAL_IMMEDIATE;

	p_Object->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, Window, D3DCREATE_SOFTWARE_VERTEXPROCESSING, &d3dpp, &D3dDevice);

	IMGUI_CHECKVERSION();

	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();

	ImGui_ImplWin32_Init(Window);
	ImGui_ImplDX9_Init(D3dDevice);

	ImGui::StyleColorsClassic();
	ImGuiStyle* style = &ImGui::GetStyle();

	style->WindowPadding = ImVec2(15, 15);
	style->WindowRounding = 0.0f;
	style->FramePadding = ImVec2(5, 5);
	style->FrameRounding = 0.0f;
	style->ItemSpacing = ImVec2(12, 8);
	style->ItemInnerSpacing = ImVec2(8, 6);
	style->IndentSpacing = 25.0f;
	style->ScrollbarSize = 15.0f;
	style->ScrollbarRounding = 0.0f;
	style->GrabMinSize = 5.0f;
	style->GrabRounding = 0.0f;
	style->TabRounding = 0.0f;
	style->FrameRounding = 0.0f;
	style->GrabRounding = 0.0f;
	style->ScrollbarRounding = 0.0f;

	style->Colors[ImGuiCol_Tab] = ImVec4(0.753f, 0.188f, 0.188f, 1.000f);
	style->Colors[ImGuiCol_TabActive] = ImVec4(0.984f, 0.263f, 0.263f, 1.000f);
	style->Colors[ImGuiCol_TabUnfocused] = ImVec4(0.753f, 0.188f, 0.188f, 1.000f);
	style->Colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.984f, 0.263f, 0.263f, 1.000f);


	style->Colors[ImGuiCol_Text] = ImVec4(1.0f, 1.00f, 1.00f, 1.000f);
	style->Colors[ImGuiCol_TextDisabled] = ImVec4(0.24f, 0.23f, 0.29f, 1.00f);
	style->Colors[ImGuiCol_WindowBg] = ImVec4(0.1f, 0.1f, 0.1f, 1.0f);
	style->Colors[ImGuiCol_ChildWindowBg] = ImVec4(0.118f, 0.118f, 0.125f, 1.000f);
	style->Colors[ImGuiCol_PopupBg] = ImVec4(0.128f, 0.128f, 0.135f, 1.000f);
	style->Colors[ImGuiCol_Border] = ImVec4(0.80f, 0.80f, 0.83f, 0.88f);
	style->Colors[ImGuiCol_BorderShadow] = ImVec4(0.92f, 0.91f, 0.88f, 0.00f);
	style->Colors[ImGuiCol_FrameBg] = ImVec4(0.128f, 0.128f, 0.135f, 1.000f);
	style->Colors[ImGuiCol_FrameBgHovered] = ImVec4(0.118f, 0.118f, 0.125f, 1.000f);
	style->Colors[ImGuiCol_FrameBgActive] = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
	style->Colors[ImGuiCol_TitleBg] = ImVec4(0.118f, 0.118f, 0.125f, 1.000f);
	style->Colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.118f, 0.118f, 0.125f, 1.000f);
	style->Colors[ImGuiCol_TitleBgActive] = ImVec4(0.118f, 0.118f, 0.125f, 1.000f);
	style->Colors[ImGuiCol_MenuBarBg] = ImVec4(0.118f, 0.118f, 0.125f, 1.000f);
	style->Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.10f, 0.09f, 0.12f, 1.00f);
	style->Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.80f, 0.80f, 0.83f, 0.31f);
	style->Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
	style->Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.06f, 0.05f, 0.07f, 1.00f);
	style->Colors[ImGuiCol_CheckMark] = ImVec4(0.80f, 0.80f, 0.83f, 0.31f);
	style->Colors[ImGuiCol_SliderGrab] = ImVec4(0.80f, 0.80f, 0.83f, 0.31f);
	style->Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.06f, 0.05f, 0.07f, 1.00f);
	style->Colors[ImGuiCol_Button] = ImVec4(0.10f, 0.09f, 0.12f, 1.00f);
	style->Colors[ImGuiCol_ButtonHovered] = ImVec4(0.24f, 0.23f, 0.29f, 1.00f);
	style->Colors[ImGuiCol_ButtonActive] = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
	style->Colors[ImGuiCol_Header] = ImVec4(0.10f, 0.09f, 0.12f, 1.00f);
	style->Colors[ImGuiCol_HeaderHovered] = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
	style->Colors[ImGuiCol_HeaderActive] = ImVec4(0.06f, 0.05f, 0.07f, 1.00f);
	style->Colors[ImGuiCol_Column] = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
	style->Colors[ImGuiCol_ColumnHovered] = ImVec4(0.24f, 0.23f, 0.29f, 1.00f);
	style->Colors[ImGuiCol_ColumnActive] = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
	style->Colors[ImGuiCol_ResizeGrip] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
	style->Colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
	style->Colors[ImGuiCol_ResizeGripActive] = ImVec4(0.06f, 0.05f, 0.07f, 1.00f);
	style->Colors[ImGuiCol_PlotLines] = ImVec4(0.40f, 0.39f, 0.38f, 0.63f);
	style->Colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.25f, 1.00f, 0.00f, 1.00f);
	style->Colors[ImGuiCol_PlotHistogram] = ImVec4(0.40f, 0.39f, 0.38f, 0.63f);
	style->Colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.25f, 1.00f, 0.00f, 1.00f);
	style->Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.25f, 1.00f, 0.00f, 0.43f);
	style->Colors[ImGuiCol_ModalWindowDarkening] = ImVec4(1.00f, 0.98f, 0.95f, 0.73f);

	style->WindowTitleAlign.x = 0.50f;
	style->FrameRounding = 0.0f;

	XorS(font, "C:\\Windows\\Fonts\\ariblk.ttf");
	m_pFont = io.Fonts->AddFontFromFileTTF(font.decrypt(), 19.0f, nullptr, io.Fonts->GetGlyphRangesDefault());

	p_Object->Release();
}




void aimbot(float targetX, float targetY, float smoothFactor, uintptr_t targetMesh)
{
	if (Aimbot::g_VisibleCheck)
	{
		if (!IsVisible(targetMesh))
			return;
	}

	for (auto& entity : entityList)
	{
		if (entity.Actor == LocalPawn) continue;
	}

	if (smoothFactor < 1.0f) smoothFactor = 0.1f;

	float centerX = Width / 2.0f;
	float centerY = Height / 2.0f;

	float deltaX = targetX - centerX;
	float deltaY = targetY - centerY;

	float distance = sqrtf(deltaX * deltaX + deltaY * deltaY);
	if (distance < 0.5f) return;

	float stepX = deltaX / smoothFactor;
	float stepY = deltaY / smoothFactor;

	LONG moveX = static_cast<LONG>(roundf(stepX));
	LONG moveY = static_cast<LONG>(roundf(stepY));

	if (abs(moveX) < 1 && abs(deltaX) > 1)
		moveX = static_cast<LONG>(deltaX);
	if (abs(moveY) < 1 && abs(deltaY) > 1)
		moveY = static_cast<LONG>(deltaY);

	INPUT input = { 0 };
	input.type = INPUT_MOUSE;
	input.mi.dx = moveX;
	input.mi.dy = moveY;
	input.mi.dwFlags = MOUSEEVENTF_MOVE;
	SendInput(1, &input, sizeof(INPUT));
}


void AimAt(DWORD_PTR entity)
{
	uint64_t currentactormesh = read<uint64_t>(DriverHandle, processID, entity + 0x280);
	auto rootHead = GetBoneWithRotation(currentactormesh, Aimbot::hitbox);
	Vector3 rootHeadOut = ProjectWorldToScreen(rootHead);

	if (rootHeadOut.x != 0 && rootHeadOut.y != 0)
	{
		aimbot(rootHeadOut.x, rootHeadOut.y, Aimbot::Smooth, currentactormesh);
	}
}


void DrawESP() {
	if (Aimbot::DrawCircle)
	{
		DrawCircle(
			circle::ScreenCenterX,
			circle::ScreenCenterY,
			Aimbot::AimFOV,
			&Col.NiggaGreen,
			64,
			1.8f
		);
	}


	if (Visuals::OverlayFPS)
	{

		XorS(title, "Sleeq Retrac External");
		char titleBuffer[128];
		int current = 1;
		int total = 2;
		sprintf_s(titleBuffer, title.decrypt());


		XorS(fpsLabel, "FPS: %.1f");
		char fpsBuffer[64];
		sprintf_s(fpsBuffer, fpsLabel.decrypt(), ImGui::GetIO().Framerate);


		DrawOutlinedText(
			m_pFont,
			titleBuffer,
			ImVec2(97, 0),
			16.0f,
			IM_COL32(255, 255, 255, 255),
			true
		);

		DrawOutlinedText(
			m_pFont,
			fpsBuffer,
			ImVec2(37, 16),
			16.0f,
			IM_COL32(255, 0, 0, 255),
			true
		);
	}



	if (Aimbot::hitboxpos == 0)
	{
		Aimbot::hitbox = 66; //head
	}
	else if (Aimbot::hitboxpos == 1)
	{
		Aimbot::hitbox = 64; //neck
	}
	else if (Aimbot::hitboxpos == 2)
	{
		Aimbot::hitbox = 7; //chest
	}
	else if (Aimbot::hitboxpos == 3)
	{
		Aimbot::hitbox = 2; //pelvis
	}

	auto entityListCopy = entityList;
	float closestDistance = FLT_MAX;
	DWORD_PTR closestPawn = NULL;

	for (unsigned long i = 0; i < entityListCopy.size(); ++i)
	{
		FNlEntity entity = entityListCopy[i];

		if (entity.Actor == LocalPawn)
			continue;



		uint64_t CurActorRootComponent = read<uint64_t>(DriverHandle, processID, entity.Actor + offsets::CurActorRootComponent);
		Vector3 actorpos = read<Vector3>(DriverHandle, processID, CurActorRootComponent + offsets::actorpos);
		Vector3 actorposW2s = ProjectWorldToScreen(actorpos);

		DWORD64 otherPlayerState = read<uint64_t>(DriverHandle, processID, entity.Actor + offsets::otherPlayerState);

		Vector3 Headpos = GetBoneWithRotation(entity.mesh, 66);
		localactorpos = read<Vector3>(DriverHandle, processID, Rootcomp + offsets::localactorpos);

		float distance = localactorpos.Distance(Headpos) / 100.f;
		if (distance < 1.0f)
			continue;

		Vector3 bone0 = GetBoneWithRotation(entity.mesh, 0);
		Vector3 bottom = ProjectWorldToScreen(bone0);
		Vector3 Headbox = ProjectWorldToScreen(Vector3(Headpos.x, Headpos.y, Headpos.z + 15));
		Vector3 feetBox = ProjectWorldToScreen(Vector3(Headpos.x, Headpos.y, Headpos.z - 115));
		Vector3 w2shead = ProjectWorldToScreen(Headpos);

		float BoxHeight = (float)(Headbox.y - bottom.y);
		float BoxWidth = BoxHeight * settings::BoxHeight;

		float LeftX = (float)Headbox.x - (BoxWidth / 1);
		float LeftY = (float)bottom.y;

		float CornerHeight = abs(Headbox.y - bottom.y);
		float CornerWidth = CornerHeight * settings::BoxWidth;





		Vector3 headScreen3D2 = ProjectWorldToScreen(Vector3(Headpos.x, Headpos.y, Headpos.z + 15));
		Vector3 bottomScreen3D2 = ProjectWorldToScreen(bone0);

		ImVec2 Headbox2 = ImVec2(headScreen3D2.x, headScreen3D2.y);
		ImVec2 Bottom2 = ImVec2(bottomScreen3D2.x, bottomScreen3D2.y);
		if (Visuals::Enable)
		{
			if (Visuals::Enable && Visuals::Box && distance < Visuals::VisDist)
			{
				bool isVisible = IsVisible(entity.mesh);

				RGBA boxColor;
				if (Aimbot::g_VisibleCheck)
				{
					if (isVisible)
					{
						auto& c = g_Colors::vis_Box;
						boxColor = { (uint8_t)(c[0] * 255), (uint8_t)(c[1] * 255), (uint8_t)(c[2] * 255), 255 };
					}
					else
					{
						auto& c = g_Colors::Box;
						boxColor = { (uint8_t)(c[0] * 255), (uint8_t)(c[1] * 255), (uint8_t)(c[2] * 255), 255 };
					}
				}
				else
				{
					auto& c = g_Colors::Box;
					boxColor = { (uint8_t)(c[0] * 255), (uint8_t)(c[1] * 255), (uint8_t)(c[2] * 255), 255 };
				}

				float x = Headbox.x - (CornerWidth / 2);
				float y = Headbox.y;
				float w = CornerWidth;
				float h = CornerHeight;
				DrawBox(x, y, w, h, &boxColor);
			}



			if (Visuals::CronerBox)
			{
				bool isVisible = IsVisible(entity.mesh);
				ImU32 CronerColor;

				if (Aimbot::g_VisibleCheck)
				{
					CronerColor = isVisible
						? Float3ToImU32(g_Colors::vis_CronerBox, 255)
						: Float3ToImU32(g_Colors::CronerBox, 255);
				}
				else
				{
					CronerColor = Float3ToImU32(g_Colors::CronerBox, 255);
				}

				DrawCorner(Headbox.x - (CornerWidth / 2), Headbox.y, CornerWidth, CornerHeight, CronerColor, 1.5f);
			}

			if (Visuals::FilledBox)
			{
				bool isVisible = IsVisible(entity.mesh);
				ImU32 FillColor;

				if (Aimbot::g_VisibleCheck)
				{
					FillColor = isVisible
						? Float3ToImU32(g_Colors::vis_FilledBox, 80)
						: Float3ToImU32(g_Colors::FilledBox, 80);
				}
				else
				{
					FillColor = Float3ToImU32(g_Colors::FilledBox, 100);
				}

				DrawFilledBox(
					Headbox.x - (CornerWidth / 2),
					Headbox.y,
					CornerWidth,
					CornerHeight,
					FillColor
				);
			}

			if (Visuals::WeaponName) {
				std::string weaponName = GetWeaponName(entity.Actor);

				if (weaponName.empty()) {
					weaponName = "No Item";
				}

				ImVec2 weaponSize = ImGui::CalcTextSize(weaponName.c_str());
				ImU32 textColor = Aimbot::g_VisibleCheck && IsVisible(entity.mesh)
					? Float3ToImU32(g_Colors::vis_WeaponName, 255)
					: Float3ToImU32(g_Colors::WeaponName, 255);

				DrawOutlinedText(m_pFont, weaponName.c_str(), ImVec2(feetBox.x, feetBox.y + 20), 16.0f, textColor, true);
			}

			if (Visuals::Distance)
			{
				XorS(dst, "[%.fm]\n");
				char dist[64];
				sprintf_s(dist, dst.decrypt(), distance);

				ImU32 textColor = Aimbot::g_VisibleCheck && IsVisible(entity.mesh)
					? Float3ToImU32(g_Colors::vis_Distance, 255)
					: Float3ToImU32(g_Colors::Distance, 255);

				DrawOutlinedText(m_pFont, dist, ImVec2(Headbox.x, Headbox.y - 20), 16.0f, textColor, true);
			}
			if (Visuals::visInfo)
			{
				bool isVisible = IsVisible(entity.mesh);
				const char* statusText = isVisible ? "Visible" : "Invisible";

				ImU32 textColor = Aimbot::g_VisibleCheck
					? (isVisible ? Float3ToImU32(g_Colors::vis_visInfo, 255) : Float3ToImU32(g_Colors::visInfo, 255))
					: Float3ToImU32(g_Colors::visInfo, 255);

				DrawOutlinedText(m_pFont, statusText, ImVec2(Headbox.x, Headbox.y - 34), 16.0f, textColor, true);
			}



			if (Visuals::Snaplines && distance < Visuals::VisDist)
			{
				RGBA snapColor = {
					(uint8_t)(g_Colors::Snaplines[0] * 255),
					(uint8_t)(g_Colors::Snaplines[1] * 255),
					(uint8_t)(g_Colors::Snaplines[2] * 255),
					255
				};

				ImVec2 to = Headbox2;

				ImVec2 from;
				switch (Visuals::SnaplineStart)
				{
				case Visuals::SnaplineFrom::Top:
					from = ImVec2(Width / 2.0f, 0.0f);
					break;
				case Visuals::SnaplineFrom::Center:
					from = ImVec2(Width / 2.0f, Height / 2.0f);
					break;
				case Visuals::SnaplineFrom::Bottom:
					from = ImVec2(Width / 2.0f, (float)Height);
					break;
				default:
					from = ImVec2(Width / 2.0f, (float)Height);
					break;
				}

				DrawLine((int)from.x, (int)from.y, (int)to.x, (int)to.y, &snapColor, 2.5f);
			}

			if (Visuals::Skeleton)
			{
				if (distance < Visuals::VisDist)
				{
					Vector3 vHead = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 66));
					Vector3 vNeck = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 65));
					Vector3 vHip = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 2));

					Vector3 vLeftShoulder = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 9));
					Vector3 vRightShoulder = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 36));
					Vector3 vLeftElbow = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 10));
					Vector3 vRightElbow = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 37));
					Vector3 vLeftHand = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 11));
					Vector3 vRightHand = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 38));

					Vector3 vLeftThigh = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 67));
					Vector3 vRightThigh = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 74));
					Vector3 vLeftCalf = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 68));
					Vector3 vRightCalf = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 75));
					Vector3 vLeftFoot = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 69));
					Vector3 vRightFoot = ProjectWorldToScreen(GetBoneWithRotation(entity.mesh, 76));

					DrawLine(vNeck.x, vNeck.y, vHead.x, vHead.y, &Col.red, 2.f);

					DrawLine(vHip.x, vHip.y, vNeck.x, vNeck.y, &Col.red, 2.f);


					DrawLine(vNeck.x, vNeck.y, vLeftShoulder.x, vLeftShoulder.y, &Col.red, 2.f);
					DrawLine(vLeftShoulder.x, vLeftShoulder.y, vLeftElbow.x, vLeftElbow.y, &Col.red, 2.f);
					DrawLine(vLeftElbow.x, vLeftElbow.y, vLeftHand.x, vLeftHand.y, &Col.red, 2.f);


					DrawLine(vNeck.x, vNeck.y, vRightShoulder.x, vRightShoulder.y, &Col.red, 2.f);
					DrawLine(vRightShoulder.x, vRightShoulder.y, vRightElbow.x, vRightElbow.y, &Col.red, 2.f);
					DrawLine(vRightElbow.x, vRightElbow.y, vRightHand.x, vRightHand.y, &Col.red, 2.f);


					DrawLine(vHip.x, vHip.y, vLeftThigh.x, vLeftThigh.y, &Col.red, 2.f);
					DrawLine(vLeftThigh.x, vLeftThigh.y, vLeftCalf.x, vLeftCalf.y, &Col.red, 2.f);
					DrawLine(vLeftCalf.x, vLeftCalf.y, vLeftFoot.x, vLeftFoot.y, &Col.red, 2.f);


					DrawLine(vHip.x, vHip.y, vRightThigh.x, vRightThigh.y, &Col.red, 2.f);
					DrawLine(vRightThigh.x, vRightThigh.y, vRightCalf.x, vRightCalf.y, &Col.red, 2.f);
					DrawLine(vRightCalf.x, vRightCalf.y, vRightFoot.x, vRightFoot.y, &Col.red, 2.f);
				}
			}
		}

		auto dx = w2shead.x - (Width / 2);
		auto dy = w2shead.y - (Height / 2);
		auto dist = sqrtf(dx * dx + dy * dy);

		if (dist < Aimbot::AimFOV && dist < closestDistance) {
			closestDistance = dist;
			closestPawn = entity.Actor;
		}
	}


	if (Aimbot::Enable)
	{
		if (Aimbot::Enable && closestPawn && GetAsyncKeyState(Aimbot::aimkey) < 0) {
			AimAt(closestPawn);
		}
	}
}




bool Slider(const char* label, float* v, float v_min, float v_max, const char* format = "%.0f")
{
	ImGuiContext& g = *GImGui;
	ImGuiWindow* window = ImGui::GetCurrentWindow();
	if (window->SkipItems)
		return false;

	const ImGuiStyle& style = g.Style;
	const ImGuiID id = window->GetID(label);
	const float height = ImGui::GetFrameHeight() + 4.0f;
	const ImVec2 label_size = ImGui::CalcTextSize(label, NULL, true);
	const float width = ImGui::CalcItemWidth();

	const ImVec2 pos = window->DC.CursorPos;
	const float total_width = width + (label_size.x > 0.0f ? style.ItemInnerSpacing.x + label_size.x : 0.0f);
	const ImRect total_bb(pos, ImVec2(pos.x + total_width, pos.y + height));
	ImGui::ItemSize(total_bb, style.FramePadding.y);
	if (!ImGui::ItemAdd(total_bb, id))
		return false;

	const ImRect bb(pos, ImVec2(pos.x + width, pos.y + height));
	ImGui::RenderFrame(bb.Min, bb.Max, ImGui::GetColorU32(ImGuiCol_FrameBg), true, style.FrameRounding);

	float t = (*v - v_min) / (v_max - v_min);
	t = (t < 0.0f) ? 0.0f : (t > 1.0f) ? 1.0f : t;
	float cursor_x = ImLerp(bb.Min.x, bb.Max.x, t);

	const float cursor_width = 12.0f;
	const float cursor_height = height * 0.75f;
	const ImVec2 cursor_min(
		cursor_x - cursor_width * 0.5f,
		bb.Min.y + (height - cursor_height) * 0.5f
	);
	const ImVec2 cursor_max(
		cursor_x + cursor_width * 0.5f,
		cursor_min.y + cursor_height
	);

	window->DrawList->AddRectFilled(cursor_min, cursor_max, IM_COL32(255, 50, 50, 255), 2.0f);

	char value_buf[32];
	ImFormatString(value_buf, IM_ARRAYSIZE(value_buf), format, *v);
	const ImVec2 text_size = ImGui::CalcTextSize(value_buf);
	const ImVec2 text_pos(
		bb.Min.x + (bb.GetWidth() - text_size.x) * 0.5f,
		bb.Min.y + (height - text_size.y) * 0.5f
	);
	window->DrawList->AddText(text_pos, ImGui::GetColorU32(ImGuiCol_Text), value_buf);

	if (label_size.x > 0.0f)
	{
		const ImVec2 label_pos(pos.x + width + style.ItemInnerSpacing.x, pos.y + style.FramePadding.y);
		ImGui::RenderText(label_pos, label);
	}

	bool value_changed = false;
	ImRect interaction_bb = bb;
	interaction_bb.Expand(ImVec2(0, style.FramePadding.y));

	if (ImGui::ItemHoverable(interaction_bb, id))
	{
		if (ImGui::IsMouseClicked(0))
		{
			ImGui::SetActiveID(id, window);
			ImGui::FocusWindow(window);
		}
	}

	if (ImGui::GetActiveID() == id)
	{
		if (ImGui::IsMouseDown(0))
		{
			float clicked_t = (g.IO.MousePos.x - bb.Min.x) / (bb.Max.x - bb.Min.x);
			clicked_t = (clicked_t < 0.0f) ? 0.0f : (clicked_t > 1.0f) ? 1.0f : clicked_t;
			*v = v_min + clicked_t * (v_max - v_min);
			value_changed = true;
		}
		else
		{
			ImGui::ClearActiveID();
		}
	}

	return value_changed;
}
bool Checkbox(const char* label, bool* v)
{
	ImGuiWindow* window = ImGui::GetCurrentWindow();
	if (window->SkipItems)
		return false;

	ImGuiContext& g = *GImGui;
	const ImGuiStyle& style = g.Style;
	const ImGuiID id = window->GetID(label);

	const ImVec2 label_size = ImGui::CalcTextSize(label, NULL, true);
	const float height = ImGui::GetFrameHeight();
	const float checkbox_size = height;
	const ImVec2 pos = window->DC.CursorPos;

	const ImRect total_bb(pos, ImVec2(pos.x + checkbox_size + style.ItemInnerSpacing.x + label_size.x, pos.y + height));
	ImGui::ItemSize(total_bb, style.FramePadding.y);
	if (!ImGui::ItemAdd(total_bb, id))
		return false;

	const ImRect check_bb(pos, ImVec2(pos.x + checkbox_size, pos.y + checkbox_size));
	ImGui::RenderFrame(check_bb.Min, check_bb.Max, ImGui::GetColorU32(ImGuiCol_FrameBg), true, style.FrameRounding);

	if (*v)
	{
		const float tick_thickness = 2.0f;
		const float tick_size = checkbox_size * 0.6f;
		const ImVec2 center = ImVec2(
			check_bb.GetCenter().x,
			check_bb.GetCenter().y - tick_size * 0.15f
		);

		ImVec2 p1 = ImVec2(center.x - tick_size * 0.3f, center.y);
		ImVec2 p2 = ImVec2(center.x - tick_size * 0.1f, center.y + tick_size * 0.4f);
		ImVec2 p3 = ImVec2(center.x + tick_size * 0.3f, center.y - tick_size * 0.4f);

		window->DrawList->AddLine(p1, p2, IM_COL32(255, 0, 0, 255), tick_thickness);
		window->DrawList->AddLine(p2, p3, IM_COL32(255, 0, 0, 255), tick_thickness);
	}

	if (label_size.x > 0.0f)
	{
		const ImVec2 text_pos(pos.x + checkbox_size + style.ItemInnerSpacing.x, pos.y + style.FramePadding.y);
		ImGui::RenderText(text_pos, label);
	}

	bool value_changed = false;
	if (ImGui::ItemHoverable(check_bb, id) && ImGui::IsMouseClicked(0))
	{
		*v = !(*v);
		value_changed = true;
		ImGui::MarkItemEdited(id);
	}

	if (ImGui::IsItemHovered())
		ImGui::SetMouseCursor(ImGuiMouseCursor_Hand);

	return value_changed;
}
bool Combo(const char* label, int* current_item, const char* const items[], int items_count)
{
	ImGuiWindow* window = ImGui::GetCurrentWindow();
	if (window->SkipItems)
		return false;

	ImGuiContext& g = *GImGui;
	const ImGuiStyle& style = g.Style;
	const ImGuiID id = window->GetID(label);

	const float height = ImGui::GetFrameHeight();
	const ImVec2 pos = window->DC.CursorPos;
	const float width = ImGui::CalcItemWidth();

	const ImRect bb(pos, ImVec2(pos.x + width, pos.y + height));
	ImGui::ItemSize(bb, style.FramePadding.y);
	if (!ImGui::ItemAdd(bb, id))
		return false;

	ImU32 bg_color = ImGui::GetColorU32(ImGuiCol_FrameBg);
	ImGui::RenderFrame(bb.Min, bb.Max, bg_color, true, style.FrameRounding);

	const char* display_value = (*current_item >= 0 && *current_item < items_count) ? items[*current_item] : "Not Selected";
	const ImVec2 text_size = ImGui::CalcTextSize(display_value);
	const ImVec2 text_pos(
		bb.Min.x + style.FramePadding.x,
		bb.Min.y + (height - text_size.y) * 0.5f
	);
	ImGui::RenderText(text_pos, display_value);

	const float arrow_size = height * 0.4f;
	const ImVec2 arrow_pos(
		bb.Max.x - style.FramePadding.x - arrow_size,
		bb.Min.y + (height - arrow_size) * 0.5f
	);

	ImVec2 p1 = ImVec2(arrow_pos.x + arrow_size * 0.5f, arrow_pos.y);
	ImVec2 p2 = ImVec2(arrow_pos.x, arrow_pos.y + arrow_size);
	ImVec2 p3 = ImVec2(arrow_pos.x + arrow_size, arrow_pos.y + arrow_size);

	window->DrawList->AddTriangleFilled(p1, p2, p3, bg_color);

	window->DrawList->AddTriangle(p1, p2, p3, ImGui::GetColorU32(ImGuiCol_Text), 1.0f);

	bool value_changed = false;
	if (ImGui::ItemHoverable(bb, id) && ImGui::IsMouseClicked(0))
	{
		ImGui::OpenPopup(label);
	}

	if (ImGui::BeginPopup(label))
	{
		ImGui::PushStyleColor(ImGuiCol_ChildBg, IM_COL32(24, 24, 24, 255));
		ImGui::PushStyleColor(ImGuiCol_Border, IM_COL32(255, 255, 255, 255));
		ImGui::PushStyleVar(ImGuiStyleVar_ChildRounding, 0.0f);
		ImGui::PushStyleVar(ImGuiStyleVar_ChildBorderSize, 1.0f);

		ImVec2 menu_size(width, 0);
		ImGui::BeginChild("##menu", menu_size, true, ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse);

		for (int i = 0; i < items_count; i++)
		{
			if (ImGui::Selectable(items[i], *current_item == i, ImGuiSelectableFlags_DontClosePopups))
			{
				*current_item = i;
				value_changed = true;
				ImGui::CloseCurrentPopup();
			}
		}

		ImGui::EndChild();
		ImGui::PopStyleVar(2);
		ImGui::PopStyleColor(2);

		ImGui::EndPopup();
	}

	if (ImGui::IsItemHovered())
		ImGui::SetMouseCursor(ImGuiMouseCursor_Hand);

	return value_changed;
}

std::string WMIQuery(const char* className, const char* property)
{
	std::string result = "N/A";

	HRESULT hres;

	static bool comInitialized = false;
	if (!comInitialized)
	{
		hres = CoInitializeEx(0, COINIT_MULTITHREADED);
		if (FAILED(hres) && hres != RPC_E_CHANGED_MODE) return "COM init failed";
		comInitialized = true;
	}

	IWbemLocator* pLoc = NULL;
	hres = CoCreateInstance(CLSID_WbemLocator, 0, CLSCTX_INPROC_SERVER, IID_IWbemLocator, (LPVOID*)&pLoc);
	if (FAILED(hres)) return "Locator failed";

	IWbemServices* pSvc = NULL;
	hres = pLoc->ConnectServer(
		_bstr_t(L"ROOT\\CIMV2"),
		NULL, NULL, 0, NULL, 0, 0, &pSvc
	);
	if (FAILED(hres)) { pLoc->Release(); return "Connect failed"; }


	IEnumWbemClassObject* pEnumerator = NULL;
	hres = pSvc->ExecQuery(
		bstr_t("WQL"),
		bstr_t(("SELECT * FROM " + std::string(className)).c_str()),
		WBEM_FLAG_FORWARD_ONLY | WBEM_FLAG_RETURN_IMMEDIATELY,
		NULL, &pEnumerator
	);

	if (SUCCEEDED(hres))
	{
		IWbemClassObject* pclsObj = NULL;
		ULONG uReturn = 0;

		if (pEnumerator->Next(WBEM_INFINITE, 1, &pclsObj, &uReturn) == S_OK)
		{
			VARIANT vtProp;
			VariantInit(&vtProp);
			hres = pclsObj->Get(_bstr_t(property), 0, &vtProp, 0, 0);
			if (SUCCEEDED(hres) && vtProp.vt == VT_BSTR)
			{
				result = _com_util::ConvertBSTRToString(vtProp.bstrVal);
			}
			VariantClear(&vtProp);
			pclsObj->Release();
		}
	}

	if (pEnumerator) pEnumerator->Release();
	pSvc->Release();
	pLoc->Release();

	return result;
}


std::string getDeviceName(const GUID& guid)
{
	HDEVINFO hDevInfo = SetupDiGetClassDevs(&guid, nullptr, nullptr, DIGCF_PRESENT);
	if (hDevInfo == INVALID_HANDLE_VALUE) return "N/A";

	SP_DEVINFO_DATA devInfo = { sizeof(SP_DEVINFO_DATA) };
	if (SetupDiEnumDeviceInfo(hDevInfo, 0, &devInfo))
	{
		char buffer[256];
		if (SetupDiGetDeviceRegistryPropertyA(hDevInfo, &devInfo, SPDRP_DEVICEDESC, nullptr, (PBYTE)buffer, sizeof(buffer), nullptr))
		{
			SetupDiDestroyDeviceInfoList(hDevInfo);
			return std::string(buffer);
		}
	}

	SetupDiDestroyDeviceInfoList(hDevInfo);
	return "N/A";
}

std::string getSmbiosUUID()
{
	DWORD size = GetSystemFirmwareTable('RSMB', 0, nullptr, 0);
	if (size == 0 || size > 65536) return "N/A";

	std::vector<BYTE> buffer(size);
	if (GetSystemFirmwareTable('RSMB', 0, buffer.data(), size) != size)
		return "N/A";

	if (size >= 24)
	{
		BYTE* uuid = &buffer[8];
		char uuidStr[37];
		snprintf(uuidStr, sizeof(uuidStr),
			"%02X%02X%02X%02X-%02X%02X-%02X%02X-%02X%02X-%02X%02X%02X%02X%02X%02X",
			uuid[0], uuid[1], uuid[2], uuid[3],
			uuid[4], uuid[5],
			uuid[6], uuid[7],
			uuid[8], uuid[9],
			uuid[10], uuid[11], uuid[12], uuid[13], uuid[14], uuid[15]);
		return std::string(uuidStr);
	}
	return "N/A";
}



void render()
{

	ImGuiIO& io = ImGui::GetIO();

	io.MouseDrawCursor = misc::ShowMenu;

	POINT p;
	GetCursorPos(&p);
	io.MousePos = ImVec2(static_cast<float>(p.x), static_cast<float>(p.y));
	io.MouseDown[0] = (GetAsyncKeyState(VK_LBUTTON) & 0x8000) != 0;
	io.MouseDown[1] = (GetAsyncKeyState(VK_RBUTTON) & 0x8000) != 0;
	io.MouseDown[2] = (GetAsyncKeyState(VK_MBUTTON) & 0x8000) != 0;

	ImGui_ImplDX9_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();


	if (misc::ShowMenu)
	{
		XorS(menu, " ");
		XorS(aim1, "Aimbot");
		XorS(aim2, "Aim Key");
		XorS(aim3, "Aim Bone");
		XorS(aim4, "FOV");
		XorS(aim5, "Smooth");
		XorS(aim6, "Draw Circle");
		XorS(aim7, "Visible Check");
		XorS(aim8, "Rapid Fire");
		XorS(aim9, "No Reload");
		XorS(aim10, "Magic Bullet");


		static const ImVec2 menu_size = ImVec2(650, 650);

		ImGui::Begin(menu.decrypt(), &misc::ShowMenu,ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse);
		ImGui::SetWindowSize(menu_size);
		ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 1.0f, 0.0f, 1.0f));
		ImGui::Checkbox("Unsafe Features", &settings::usafeFeatures);
		ImGui::PopStyleColor();
		if (ImGui::BeginTabBar("MenuTabs", ImGuiTabBarFlags_None))
		{
			if (ImGui::BeginTabItem("    Aimbot"))
			{
				ImGui::Text("Aimbot");
				ImGui::SameLine(325.0f);
				ImGui::Text("    Crosshair");

				ImGui::Separator();
				ImGui::SameLine(325.0f);
				ImGui::Separator();

				ImGui::BeginChild("LeftColumn", ImVec2(325, 0), false);
				{
					Checkbox(aim1.decrypt(), &Aimbot::Enable);
					const char* aimbotTypes[] = { "Mouse" };
					int dummyIndex = 0;
					ImGui::Combo("Aimbot Type", &dummyIndex, aimbotTypes, 1);
					const char* hitbox_names[] = { "Head", "Neck", "chest", "Pelvis" };
					static int current_hitbox = Aimbot::hitboxpos;
					if (ImGui::Combo("Hitbox", &current_hitbox, hitbox_names, IM_ARRAYSIZE(hitbox_names)))
						Aimbot::hitboxpos = current_hitbox;
					static const struct {
						const char* name;
						int vk;
					} keyMap[] = {
						{"Mouse1", VK_LBUTTON},
						{"Mouse2", VK_RBUTTON},
						{"Mouse3", VK_MBUTTON},
						{"Mouse4", VK_XBUTTON1},
						{"Mouse5", VK_XBUTTON2},
						{"A", 'A'}, {"S", 'S'}, {"D", 'D'}, {"F", 'F'}, {"G", 'G'},
						{"Space", VK_SPACE},
						{"Shift", VK_LSHIFT},
						{"Ctrl", VK_LCONTROL},
						{"Alt", VK_LMENU},
						{"Caps", VK_CAPITAL},
						{"Tab", VK_TAB},
						{"Enter", VK_RETURN},
						{"Backspace", VK_BACK},
						{"F1", VK_F1}, {"F2", VK_F2}, {"F3", VK_F3}, {"F4", VK_F4},
						{"Up", VK_UP}, {"Down", VK_DOWN}, {"Left", VK_LEFT}, {"Right", VK_RIGHT}
					};

					const char* currentKeyStr = "Unknown";
					for (const auto& k : keyMap)
					{
						if (k.vk == Aimbot::aimkey)
						{
							currentKeyStr = k.name;
							break;
						}
					}

					static bool waitingForKey = false;

					if (waitingForKey)
					{
						ImGui::Text("Waiting for key... (ESC to cancel)");

						ImGuiIO& io = ImGui::GetIO();

						if (ImGui::IsMouseClicked(0)) { Aimbot::aimkey = VK_LBUTTON; waitingForKey = false; }
						if (ImGui::IsMouseClicked(1)) { Aimbot::aimkey = VK_RBUTTON; waitingForKey = false; }
						if (ImGui::IsMouseClicked(2)) { Aimbot::aimkey = VK_MBUTTON; waitingForKey = false; }

						if (GetAsyncKeyState(VK_XBUTTON1) & 0x8000) { Aimbot::aimkey = VK_XBUTTON1; waitingForKey = false; }
						if (GetAsyncKeyState(VK_XBUTTON2) & 0x8000) { Aimbot::aimkey = VK_XBUTTON2; waitingForKey = false; }

						for (size_t i = 5; i < _countof(keyMap); ++i)
						{
							if (GetAsyncKeyState(keyMap[i].vk) & 0x8000)
							{
								if (keyMap[i].vk == VK_ESCAPE || keyMap[i].vk == VK_LWIN || keyMap[i].vk == VK_RWIN)
									continue;


								Aimbot::aimkey = keyMap[i].vk;
								waitingForKey = false;
								break;
							}
						}

						if (GetAsyncKeyState(VK_ESCAPE) & 0x8000)
						{
							waitingForKey = false;
						}
					}
					else
					{
						if (ImGui::Button(currentKeyStr, ImVec2(120, 0)))
						{
							waitingForKey = true;
						}
					}

					Slider(aim4.decrypt(), &Aimbot::AimFOV, 25.0f, 800.0f, "%.0f");
					Slider(aim5.decrypt(), &Aimbot::Smooth, 1.0f, 10.0f, "%.0f");

					Checkbox(aim6.decrypt(), &Aimbot::DrawCircle);
					Checkbox(aim7.decrypt(), &Aimbot::g_VisibleCheck);
					if
						(settings::usafeFeatures) {
						ImGui::Text("Exploits");
						ImGui::Separator();
						Checkbox(aim8.decrypt(), &exploits::g_rapidFire);
						Slider("Rapid Value", &exploits::RapiValue, 0.0f, 30.0f, "%.1f");
						Checkbox(aim9.decrypt(), &exploits::FastReload);
						Checkbox(aim10.decrypt(), &exploits::magicbullet);
					}
				}
				ImGui::EndChild();

				ImGui::SameLine();

				ImGui::BeginChild("RightColumn", ImVec2(325, 0), false);
				{
					Checkbox("Draw Crosshair", &Crosshair::g_DrawCrosshair);
					Checkbox("X Shape", &Crosshair::g_CrosshairShape);

					Slider("Length", &Crosshair::g_CrosshairLength, 1.0f, 30.0f, "%.1f");
					Slider("Thickness", &Crosshair::g_CrosshairThickness, 1.0f, 5.0f, "%.1f");

					ImGui::ColorPicker4("Crosshair Color", (float*)&Crosshair::g_CrosshairColor);
				}
				ImGui::EndChild();

				ImGui::EndTabItem();
			}

			XorS(box_esp, "Box");
			XorS(Distanc, "Distance");
			XorS(Visinfor, "Visible Info");
			XorS(WpName, "Weapon Name");
			XorS(SkipMate, "Ignore Team");
			XorS(Cornr, "Corner Box");
			XorS(FilBx, "Filled Box");
			XorS(Skeltn, "Skeleton (shit)");
			XorS(snapline, "Snaplines");
			XorS(BoxWidt, "Box Width");
			XorS(MaxDistance, "ESP Distance");

			if (ImGui::BeginTabItem("Visuals"))
			{
				ImGui::Text("Visuals");
				ImGui::SameLine(325.0f);
				ImGui::Text("    Colors");
				ImGui::Separator();
				ImGui::SameLine(325.0f);
				ImGui::Separator();

				ImGui::BeginChild("LeftColumn", ImVec2(325, 0), false);
				{
					Checkbox(box_esp.decrypt(), &Visuals::Box);
					Checkbox(Cornr.decrypt(), &Visuals::CronerBox);
					Checkbox(FilBx.decrypt(), &Visuals::FilledBox);
					Checkbox(Skeltn.decrypt(), &Visuals::Skeleton);
					Checkbox(snapline.decrypt(), &Visuals::Snaplines);
					const char* snaplineFromItems[] = {
						"Top of Screen",
						"Center of Screen",
						"Bottom of Screen"
					};
					ImGui::Combo("Snapline From", (int*)&Visuals::SnaplineStart, snaplineFromItems, IM_ARRAYSIZE(snaplineFromItems));
					Checkbox(Distanc.decrypt(), &Visuals::Distance);
					Checkbox(WpName.decrypt(), &Visuals::WeaponName);
					Checkbox(Visinfor.decrypt(), &Visuals::visInfo);
					Slider(MaxDistance.decrypt(), &Visuals::VisDist, 25.0f, 1000.0f, "%.0f");
					Slider(BoxWidt.decrypt(), &settings::BoxWidth, 0.0f, 2.0f, "%.2f");
				}
				ImGui::EndChild();
				ImGui::SameLine();

				ImGui::BeginChild("RightColumn", ImVec2(325, 0), false);
				{
					auto DrawColorPickerButton = [](const char* label, float color[4], const char* popup_id) {
						ImGui::Text("%s", label);
						ImGui::SameLine();

						ImVec2 rect_min = ImGui::GetCursorScreenPos();
						ImVec2 rect_max = ImVec2(rect_min.x + 24, rect_min.y + 16);
						ImGui::GetWindowDrawList()->AddRectFilled(rect_min, rect_max, ImColor(color[0], color[1], color[2], color[3]));
						ImGui::Dummy(ImVec2(24, 16));

						if (ImGui::IsItemClicked())
						{
							ImGui::OpenPopup(popup_id);
						}

						if (ImGui::BeginPopup(popup_id))
						{
							ImGui::Text("%s", label);
							ImGui::ColorPicker4("##picker", color,
								ImGuiColorEditFlags_NoSidePreview |
								ImGuiColorEditFlags_NoInputs);
							if (ImGui::Button("Close", ImVec2(120, 0)))
							{
								ImGui::CloseCurrentPopup();
							}
							ImGui::EndPopup();
						}
						};

					auto EnsureAlpha = [](float dst[4], const float src[3], float alpha = 1.0f) {
						dst[0] = src[0]; dst[1] = src[1]; dst[2] = src[2]; dst[3] = alpha;
						};

					static float vis_Box4[4], Box4[4];
					static float vis_Snaplines4[4], Snaplines4[4];
					static float vis_Distance4[4], Distance4[4];
					static float vis_visInfo4[4], visInfo4[4];
					static float vis_CronerBox4[4], CronerBox4[4];
					static float vis_FilledBox4[4], FilledBox4[4];

					static bool initialized = false;
					if (!initialized)
					{
						EnsureAlpha(vis_Box4, g_Colors::vis_Box, 1.0f);
						EnsureAlpha(Box4, g_Colors::Box, 1.0f);
						EnsureAlpha(vis_Snaplines4, g_Colors::vis_Snaplines, 1.0f);
						EnsureAlpha(Snaplines4, g_Colors::Snaplines, 1.0f);
						EnsureAlpha(vis_Distance4, g_Colors::vis_Distance, 1.0f);
						EnsureAlpha(Distance4, g_Colors::Distance, 1.0f);
						EnsureAlpha(vis_visInfo4, g_Colors::vis_visInfo, 1.0f);
						EnsureAlpha(visInfo4, g_Colors::visInfo, 1.0f);
						EnsureAlpha(vis_CronerBox4, g_Colors::vis_CronerBox, 1.0f);
						EnsureAlpha(CronerBox4, g_Colors::CronerBox, 1.0f);
						EnsureAlpha(vis_FilledBox4, g_Colors::vis_FilledBox, 1.0f);
						EnsureAlpha(FilledBox4, g_Colors::FilledBox, 1.0f);
						initialized = true;
					}

#define SYNC_COLOR(dst4, src3) \
        dst4[0] = src3[0]; dst4[1] = src3[1]; dst4[2] = src3[2];

					SYNC_COLOR(vis_Box4, g_Colors::vis_Box);
					SYNC_COLOR(Box4, g_Colors::Box);
					SYNC_COLOR(vis_Snaplines4, g_Colors::vis_Snaplines);
					SYNC_COLOR(Snaplines4, g_Colors::Snaplines);
					SYNC_COLOR(vis_Distance4, g_Colors::vis_Distance);
					SYNC_COLOR(Distance4, g_Colors::Distance);
					SYNC_COLOR(vis_visInfo4, g_Colors::vis_visInfo);
					SYNC_COLOR(visInfo4, g_Colors::visInfo);
					SYNC_COLOR(vis_CronerBox4, g_Colors::vis_CronerBox);
					SYNC_COLOR(CronerBox4, g_Colors::CronerBox);
					SYNC_COLOR(vis_FilledBox4, g_Colors::vis_FilledBox);
					SYNC_COLOR(FilledBox4, g_Colors::FilledBox);

					DrawColorPickerButton("Visible Box Color", vis_Box4, "popup_vis_Box");
					ImGui::Spacing();
					DrawColorPickerButton("Invisible Box Color", Box4, "popup_Box");
					ImGui::Spacing();
					DrawColorPickerButton("Visible Croner Color", vis_CronerBox4, "popup_vis_CronerBox");
					ImGui::Spacing();
					DrawColorPickerButton("Invisible Croner Color", CronerBox4, "popup_CronerBox");
					ImGui::Spacing();
					DrawColorPickerButton("Visible Filled Color", vis_FilledBox4, "popup_vis_FilledBox");
					ImGui::Spacing();
					DrawColorPickerButton("Invisible Filled Color", FilledBox4, "popup_FilledBox");
					ImGui::Spacing();

					DrawColorPickerButton("Visible Snaplines Color", vis_Snaplines4, "popup_vis_Snaplines");
					ImGui::Spacing();
					DrawColorPickerButton("Invisible Snaplines Color", Snaplines4, "popup_Snaplines");
					ImGui::Spacing();
					DrawColorPickerButton("Visible Distance Color", vis_Distance4, "popup_vis_Distance");
					ImGui::Spacing();
					DrawColorPickerButton("Invisible Distance Color", Distance4, "popup_Distance");
					ImGui::Spacing();
					DrawColorPickerButton("Visible Info Color", vis_visInfo4, "popup_vis_visInfo");
					ImGui::Spacing();
					DrawColorPickerButton("Invisible Info Color", visInfo4, "popup_visInfo");


#define UPDATE_COLOR(dst3, src4) \
        dst3[0] = src4[0]; dst3[1] = src4[1]; dst3[2] = src4[2];

					UPDATE_COLOR(g_Colors::vis_Box, vis_Box4);
					UPDATE_COLOR(g_Colors::Box, Box4);
					UPDATE_COLOR(g_Colors::vis_Snaplines, vis_Snaplines4);
					UPDATE_COLOR(g_Colors::Snaplines, Snaplines4);
					UPDATE_COLOR(g_Colors::vis_Distance, vis_Distance4);
					UPDATE_COLOR(g_Colors::Distance, Distance4);
					UPDATE_COLOR(g_Colors::vis_visInfo, vis_visInfo4);
					UPDATE_COLOR(g_Colors::visInfo, visInfo4);
					UPDATE_COLOR(g_Colors::vis_CronerBox, vis_CronerBox4);
					UPDATE_COLOR(g_Colors::CronerBox, CronerBox4);
					UPDATE_COLOR(g_Colors::vis_FilledBox, vis_FilledBox4);
					UPDATE_COLOR(g_Colors::FilledBox, FilledBox4);

#undef SYNC_COLOR
#undef UPDATE_COLOR
				}
				ImGui::EndChild();

				ImGui::EndTabItem();
			}

			XorS(configTab, "Config");
			XorS(saveBtn, "Save");
			XorS(loadBtn, "Load");
			XorS(configName, "Config Name");

			if (ImGui::BeginTabItem(configTab.decrypt()))
			{
				static char cfgName[64] = "Config";
				ImGui::InputText(configName.decrypt(), cfgName, sizeof(cfgName));

				char appdataPath[MAX_PATH];
				if (SUCCEEDED(SHGetFolderPathA(NULL, CSIDL_APPDATA, NULL, 0, appdataPath)))
				{
					std::string configDir = std::string(appdataPath) + "\\nzxt\\configs";
					CreateDirectoryA(configDir.c_str(), NULL);
					std::string fullPath = configDir + "\\" + std::string(cfgName) + ".cfg";

					if (ImGui::Button(saveBtn.decrypt()))
					{
						std::ofstream file(fullPath);
						if (file.is_open())
						{
							file << "[Aimbot]\n";
							file << "Enable=" << Aimbot::Enable << "\n";
							file << "BoxWidth=" << settings::BoxWidth << "\n";
							file << "FOV=" << Aimbot::AimFOV << "\n";
							file << "Smooth=" << Aimbot::Smooth << "\n";
							file << "AimKey=" << Aimbot::aimkey << "\n";
							file << "VisibleCheck=" << Aimbot::g_VisibleCheck << "\n";
							file << "Hitbox=" << Aimbot::hitboxpos << "\n";
							file << "DrawCircle=" << Aimbot::DrawCircle << "\n";
							file << "DrawTarget=" << Crosshair::g_DrawCrosshair << "\n";
							file << "CrosshairShape=" << Crosshair::g_CrosshairShape << "\n";
							file << "CenterDotCenterDot=" << Crosshair::g_CenterDot << "\n";
							file << "DotSize=" << Crosshair::g_CrosshairDotSize << "\n";
							file << "Length=" << Crosshair::g_CrosshairLength << "\n";
							file << "Thickness=" << Crosshair::g_CrosshairThickness << "\n";
							file << "CrosshairColorR=" << Crosshair::g_CrosshairColor[0] << "\n";
							file << "CrosshairColorG=" << Crosshair::g_CrosshairColor[1] << "\n";
							file << "CrosshairColorB=" << Crosshair::g_CrosshairColor[2] << "\n";

							file << "\n[Visuals]\n";
							file << "Distance=" << Visuals::Distance << "\n";
							file << "VisInfo=" << Visuals::visInfo << "\n";
							file << "WeaponName=" << Visuals::WeaponName << "\n";
							file << "SkipTeam=" << Visuals::SkipTeam << "\n";
							file << "CornerBox=" << Visuals::CronerBox << "\n";
							file << "Box=" << Visuals::Box << "\n";
							file << "Snaplines=" << Visuals::Snaplines << "\n";
							file << "VisDist=" << Visuals::VisDist << "\n";
							file << "OverlayFPS=" << Visuals::OverlayFPS << "\n";

							file << "\n[Colors]\n";

							auto WriteColor = [&](const char* name, const float color[3]) {
								file << name << "R=" << color[0] << "\n";
								file << name << "G=" << color[1] << "\n";
								file << name << "B=" << color[2] << "\n";
								};

							WriteColor("vis_Box", g_Colors::vis_Box);
							WriteColor("Box", g_Colors::Box);
							WriteColor("vis_Snaplines", g_Colors::vis_Snaplines);
							WriteColor("Snaplines", g_Colors::Snaplines);
							WriteColor("vis_Distance", g_Colors::vis_Distance);
							WriteColor("Distance", g_Colors::Distance);
							WriteColor("vis_visInfo", g_Colors::vis_visInfo);
							WriteColor("visInfo", g_Colors::visInfo);
							WriteColor("vis_CronerBox", g_Colors::vis_CronerBox);
							WriteColor("CronerBox", g_Colors::CronerBox);
							WriteColor("vis_FilledBox", g_Colors::vis_FilledBox);
							WriteColor("FilledBox", g_Colors::FilledBox);

							file.close();
						}
					}

					if (ImGui::Button(loadBtn.decrypt()))
					{
						std::ifstream file(fullPath);
						if (file.is_open())
						{
							std::string line, section;
							while (std::getline(file, line))
							{
								if (line.empty()) continue;
								if (line.front() == '[' && line.back() == ']') {
									section = line.substr(1, line.size() - 2);
									continue;
								}
								auto eq = line.find('='); if (eq == std::string::npos) continue;
								std::string key = line.substr(0, eq), valStr = line.substr(eq + 1);
								auto toBool = [](const std::string& s) { return s == "1" || s == "true"; };
								auto toFloat = [](const std::string& s) { return std::stof(s); };

								if (section == "Aimbot")
								{
									if (key == "Enable") Aimbot::Enable = toBool(valStr);
									else if (key == "FOV") Aimbot::AimFOV = toFloat(valStr);
									else if (key == "Smooth") Aimbot::Smooth = toFloat(valStr);
									else if (key == "BoxWidth") settings::BoxWidth = toFloat(valStr);
									else if (key == "AimKey")
									{
										Aimbot::aimkey = std::stoi(valStr);
									}
									else if (key == "VisibleCheck") Aimbot::g_VisibleCheck = toBool(valStr);
									else if (key == "Hitbox") Aimbot::hitboxpos = std::stoi(valStr);
									else if (key == "DrawCircle") Aimbot::DrawCircle = toBool(valStr);
									else if (key == "DrawTarget") Crosshair::g_DrawCrosshair = toBool(valStr);
									else if (key == "CrosshairShape") Crosshair::g_CrosshairShape = toBool(valStr);
									else if (key == "CenterDotCenterDot") Crosshair::g_CenterDot = toBool(valStr);
									else if (key == "DotSize") Crosshair::g_CrosshairDotSize = toFloat(valStr);
									else if (key == "Length") Crosshair::g_CrosshairLength = toFloat(valStr);
									else if (key == "Thickness") Crosshair::g_CrosshairThickness = toFloat(valStr);
									else if (key == "CrosshairColorR") Crosshair::g_CrosshairColor[0] = toFloat(valStr);
									else if (key == "CrosshairColorG") Crosshair::g_CrosshairColor[1] = toFloat(valStr);
									else if (key == "CrosshairColorB") Crosshair::g_CrosshairColor[2] = toFloat(valStr);
								}
								else if (section == "Visuals")
								{
									if (key == "Distance") Visuals::Distance = toBool(valStr);
									else if (key == "VisInfo") Visuals::visInfo = toBool(valStr);
									else if (key == "WeaponName") Visuals::WeaponName = toBool(valStr);
									else if (key == "SkipTeam") Visuals::SkipTeam = toBool(valStr);
									else if (key == "CornerBox") Visuals::CronerBox = toBool(valStr);
									else if (key == "Box") Visuals::Box = toBool(valStr);
									else if (key == "Snaplines") Visuals::Snaplines = toBool(valStr);
									else if (key == "VisDist") Visuals::VisDist = std::stoi(valStr);
									else if (key == "OverlayFPS") Visuals::OverlayFPS = toBool(valStr);
								}
								else if (section == "Colors")
								{
									auto LoadColor = [&](const char* baseName, float color[3]) {
										if (key == (std::string(baseName) + "R")) color[0] = toFloat(valStr);
										else if (key == (std::string(baseName) + "G")) color[1] = toFloat(valStr);
										else if (key == (std::string(baseName) + "B")) color[2] = toFloat(valStr);
										};

									LoadColor("vis_Box", g_Colors::vis_Box);
									LoadColor("Box", g_Colors::Box);
									LoadColor("vis_Snaplines", g_Colors::vis_Snaplines);
									LoadColor("Snaplines", g_Colors::Snaplines);
									LoadColor("vis_Distance", g_Colors::vis_Distance);
									LoadColor("Distance", g_Colors::Distance);
									LoadColor("vis_visInfo", g_Colors::vis_visInfo);
									LoadColor("visInfo", g_Colors::visInfo);
									LoadColor("vis_CronerBox", g_Colors::vis_CronerBox);
									LoadColor("CronerBox", g_Colors::CronerBox);
									LoadColor("vis_FilledBox", g_Colors::vis_FilledBox);
									LoadColor("FilledBox", g_Colors::FilledBox);
								}
							}
							file.close();
						}
					}
				}
				ImGui::EndTabItem();
			}


			if (ImGui::BeginTabItem("Misc"))
			{
				XorS(unloadCheat, "Unload Cheat");
				XorS(streamproofStr, "Streamproof");
				XorS(uptimeStr, "Play Time: ");

				ImGui::Text("General");
				ImGui::SameLine(325.0f);
				ImGui::Text("    Hardware Info");

				ImGui::Separator();
				ImGui::SameLine(325.0f);
				ImGui::Separator();

				ImGui::BeginChild("LeftColumn", ImVec2(325, 0), false);
				{
					Checkbox(streamproofStr.decrypt(), &misc::g_Streamproof);
					if (misc::g_OverlayWindow)
					{
						LONG exStyle = WS_EX_TOPMOST | WS_EX_TRANSPARENT;
						if (misc::g_Streamproof)
							exStyle |= WS_EX_TOOLWINDOW;
						else
							exStyle &= ~WS_EX_TOOLWINDOW;
						SetWindowLongPtr(misc::g_OverlayWindow, GWL_EXSTYLE, exStyle);
					}

					auto now = std::chrono::steady_clock::now();
					auto elapsed = std::chrono::duration_cast<std::chrono::minutes>(now - misc::g_CheatStartTime).count();
					ImGui::Text("%s%lld min", uptimeStr.decrypt(), elapsed);

					SIZE_T memUsage = getCurrentMemoryUsage();
					ImGui::Text("Memory: %.2f MB", memUsage / (1024.0f * 1024.0f));
					{
						MEMORYSTATUSEX memInfo;
						memInfo.dwLength = sizeof(MEMORYSTATUSEX);
						GlobalMemoryStatusEx(&memInfo);
						double ramUsedGB = (memInfo.ullTotalPhys - memInfo.ullAvailPhys) / (1024.0 * 1024.0 * 1024.0);
						double ramTotalGB = memInfo.ullTotalPhys / (1024.0 * 1024.0 * 1024.0);
						int ramPercent = (int)(100.0 * (ramUsedGB / ramTotalGB));

						ImGui::Text("System RAM: %.2f / %.2f GB (%d%%)", ramUsedGB, ramTotalGB, ramPercent);

						static FILETIME prevIdle, prevKernel, prevUser;
						static bool firstRun = true;
						static float cpuUsage = 0.0f;

						FILETIME idle, kernel, user;
						if (GetSystemTimes(&idle, &kernel, &user))
						{
							if (!firstRun)
							{
								ULARGE_INTEGER idleTime, kernelTime, userTime;
								ULARGE_INTEGER prevIdleTime, prevKernelTime, prevUserTime;

								idleTime.LowPart = idle.dwLowDateTime;
								idleTime.HighPart = idle.dwHighDateTime;
								kernelTime.LowPart = kernel.dwLowDateTime;
								kernelTime.HighPart = kernel.dwHighDateTime;
								userTime.LowPart = user.dwLowDateTime;
								userTime.HighPart = user.dwHighDateTime;

								prevIdleTime.LowPart = prevIdle.dwLowDateTime;
								prevIdleTime.HighPart = prevIdle.dwHighDateTime;
								prevKernelTime.LowPart = prevKernel.dwLowDateTime;
								prevKernelTime.HighPart = prevKernel.dwHighDateTime;
								prevUserTime.LowPart = prevUser.dwLowDateTime;
								prevUserTime.HighPart = prevUser.dwHighDateTime;

								ULONGLONG kernelDiff = kernelTime.QuadPart - prevKernelTime.QuadPart;
								ULONGLONG userDiff = userTime.QuadPart - prevUserTime.QuadPart;
								ULONGLONG idleDiff = idleTime.QuadPart - prevIdleTime.QuadPart;
								ULONGLONG totalDiff = kernelDiff + userDiff;

								if (totalDiff > 0)
								{
									cpuUsage = 100.0f * (totalDiff - idleDiff) / (float)totalDiff;
									cpuUsage = std::min(100.0f, std::max(0.0f, cpuUsage));
								}
							}

							prevIdle = idle;
							prevKernel = kernel;
							prevUser = user;
							firstRun = false;
						}

						ImGui::Text("System CPU: %.1f%%", cpuUsage);
					}
					auto now_sys = std::chrono::system_clock::now();
					std::time_t now_time_t = std::chrono::system_clock::to_time_t(now_sys);
					std::tm tm_info;
					localtime_s(&tm_info, &now_time_t);
					char time_str[20];
					strftime(time_str, sizeof(time_str), "%H:%M:%S", &tm_info);
					ImGui::Text("System Time: %s", time_str);

					ImGui::Text("Screen: %dx%d", GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN));
					ImGui::Text("DPI Scale: %.1f", GetDpiForSystem() / 96.0f);


					if (ImGui::Button(unloadCheat.decrypt()))
					{
						exit(0);
					}
				}
				ImGui::EndChild();

				ImGui::SameLine();

				ImGui::BeginChild("RightColumn", ImVec2(325, 0), false);
				{
					static bool fetched = false;
					static std::string cpuId, cpuName, motherboard, gpu, diskSerial, macAddr, uuid;

					if (ImGui::Button("Fetch All Hardware"))
					{
						fetched = true;


						{
							int cpuInfo[4] = { 0 };
							__cpuid(cpuInfo, 1);
							char cpuStr[16];
							sprintf_s(cpuStr, "%08X", cpuInfo[3]);
							cpuId = cpuStr;
						}
						{
							DWORD serial = 0;
							if (GetVolumeInformationA("C:\\", nullptr, 0, &serial, nullptr, nullptr, nullptr, 0))
							{
								char diskStr[16];
								sprintf_s(diskStr, "%08X", serial);
								diskSerial = diskStr;
							}
							else
							{
								diskSerial = "N/A";
							}
						}
						{
							PIP_ADAPTER_INFO pAdapterInfo = nullptr;
							ULONG ulOutBufLen = 0;

							if (GetAdaptersInfo(nullptr, &ulOutBufLen) == ERROR_BUFFER_OVERFLOW)
							{
								pAdapterInfo = (IP_ADAPTER_INFO*)malloc(ulOutBufLen);
								if (pAdapterInfo && GetAdaptersInfo(pAdapterInfo, &ulOutBufLen) == NO_ERROR)
								{
									char mac[18];
									sprintf_s(mac, "%02X:%02X:%02X:%02X:%02X:%02X",
										pAdapterInfo->Address[0], pAdapterInfo->Address[1],
										pAdapterInfo->Address[2], pAdapterInfo->Address[3],
										pAdapterInfo->Address[4], pAdapterInfo->Address[5]);
									macAddr = mac;
								}
								else
								{
									macAddr = "N/A";
								}
								if (pAdapterInfo) free(pAdapterInfo);
							}
							else
							{
								macAddr = "N/A";
							}
						}
						motherboard = getDeviceName(GUID_DEVCLASS_SYSTEM);


						gpu = getDeviceName(GUID_DEVCLASS_DISPLAY);


						uuid = getSmbiosUUID();
					}

					if (!fetched)
					{
						ImGui::Text("Click 'Fetch All Hardware'");
					}
					else
					{
						ImGui::Text("CPU ID: %s", cpuId.c_str());
						ImGui::Text("Disk Serial: %s", diskSerial.c_str());
						ImGui::Text("MAC: %s", macAddr.c_str());
						ImGui::Text("Motherboard: %s", motherboard.c_str());
						ImGui::Text("GPU: %s", gpu.c_str());
						ImGui::Text("UUID: %s", uuid.c_str());
					}
				}
				ImGui::EndChild();

				ImGui::EndTabItem();
			}

			ImGui::EndTabBar();
		}
		ImGui::End();
	}
	DrawCrosshair();

	DrawESP();

	ImGui::EndFrame();
	D3dDevice->SetRenderState(D3DRS_ZENABLE, false);
	D3dDevice->SetRenderState(D3DRS_ALPHABLENDENABLE, false);
	D3dDevice->SetRenderState(D3DRS_SCISSORTESTENABLE, false);
	D3dDevice->Clear(0, NULL, D3DCLEAR_TARGET, D3DCOLOR_ARGB(0, 0, 0, 0), 1.0f, 0);
	if (D3dDevice->BeginScene() >= 0)
	{
		ImGui::Render();
		ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());
		D3dDevice->EndScene();
	}
	HRESULT result = D3dDevice->Present(NULL, NULL, NULL, NULL);

	if (result == D3DERR_DEVICELOST && D3dDevice->TestCooperativeLevel() == D3DERR_DEVICENOTRESET)
	{
		ImGui_ImplDX9_InvalidateDeviceObjects();
		D3dDevice->Reset(&d3dpp);
		ImGui_ImplDX9_CreateDeviceObjects();
	}
}


void PlayerHelper()
{

	if (exploits::magicbullet) {

		exploits::magicreset = false;
		auto weapon = read<uintptr_t>(DriverHandle, processID, LocalPawn + offsets::CurrentWeapon);
		write<bool>(weapon + 0x091D, true); // bTraceThroughWorld
		write<int>(weapon + 0x0920, 1000); // TraceThroughPawnsLimit
		write<int>(weapon + 0x0924, 1000); // TraceThroughBuildingsLimit

	}

	else if (!exploits::magicreset) {

		auto weapon = read<uintptr_t>(DriverHandle, processID, LocalPawn + offsets::CurrentWeapon);

		write<bool>(weapon + 0x091D, false); // bTraceThroughWorld
		write<int>(weapon + 0x0920, 0); // TraceThroughPawnsLimit
		write<int>(weapon + 0x0924, 0); // TraceThroughBuildingsLimit
		write<int>(weapon + 0x0928, 0); // TraceThroughLandscapeLimit
		exploits::magicreset = true;

	}


	if (exploits::g_rapidFire) {
		uintptr_t CurrentWeapon = read<uintptr_t>(DriverHandle, processID, LocalPawn + offsets::CurrentWeapon);
		float a = 0;
		float b = 0;
		if (CurrentWeapon) {
			a = read<float>(DriverHandle, processID, CurrentWeapon + Exploits::LastFireTime);
			b = read<float>(DriverHandle, processID, CurrentWeapon + Exploits::LastFireTimeVerified);
			write<float>(CurrentWeapon + Exploits::LastFireTime, a + b - exploits::RapiValue);
		}
	}

	if (exploits::FastReload)
	{
		uintptr_t CurrentWeapon = read<uintptr_t>(DriverHandle, processID, LocalPawn + offsets::CurrentWeapon);
		bool bIsReloadingWeapon = read<bool>(DriverHandle, processID, CurrentWeapon + Exploits::bIsReloadingWeapon);
		auto Mesh = read<uint64_t>(DriverHandle, processID, LocalPawn + offsets::mesh);
		if (bIsReloadingWeapon)
			write<float>(Mesh + Exploits::GlobalAnimRateScale, 999.f);
		else
			write<float>(Mesh + Exploits::GlobalAnimRateScale, 1.f);
	}

}

MSG Message = { NULL };

void xMainLoop()
{
	static RECT old_rc;
	ZeroMemory(&Message, sizeof(MSG));

	while (Message.message != WM_QUIT)
	{
		if (PeekMessage(&Message, Window, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&Message);
			DispatchMessage(&Message);
		}

		HWND hwnd_active = GetForegroundWindow();

		if (hwnd_active == hwnd) {
			HWND hwndtest = GetWindow(hwnd_active, GW_HWNDPREV);
			SetWindowPos(Window, hwndtest, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
		}

		if (GetAsyncKeyState(0x23) & 1)
			exit(8);

		RECT rc;
		POINT xy;

		ZeroMemory(&rc, sizeof(RECT));
		ZeroMemory(&xy, sizeof(POINT));
		GetClientRect(hwnd, &rc);
		ClientToScreen(hwnd, &xy);
		rc.left = xy.x;
		rc.top = xy.y;

		ImGuiIO& io = ImGui::GetIO();
		io.ImeWindowHandle = hwnd;
		io.DeltaTime = 1.0f / 60.0f;

		POINT p;
		GetCursorPos(&p);
		io.MousePos.x = p.x - xy.x;
		io.MousePos.y = p.y - xy.y;

		if (GetAsyncKeyState(VK_LBUTTON)) {
			io.MouseDown[0] = true;
			io.MouseClicked[0] = true;
			io.MouseClickedPos[0].x = io.MousePos.x;
			io.MouseClickedPos[0].x = io.MousePos.y;
		}
		else
			io.MouseDown[0] = false;

		if (rc.left != old_rc.left || rc.right != old_rc.right || rc.top != old_rc.top || rc.bottom != old_rc.bottom)
		{
			old_rc = rc;

			Width = rc.right;
			Height = rc.bottom;

			d3dpp.BackBufferWidth = Width;
			d3dpp.BackBufferHeight = Height;
			SetWindowPos(Window, (HWND)0, xy.x, xy.y, Width, Height, SWP_NOREDRAW);
			D3dDevice->Reset(&d3dpp);
		}
		render();
		PlayerHelper();
	}
	ImGui_ImplDX9_Shutdown();
	ImGui_ImplWin32_Shutdown();
	ImGui::DestroyContext();

	DestroyWindow(Window);
}

LRESULT CALLBACK WinProc(HWND hWnd, UINT Message, WPARAM wParam, LPARAM lParam)
{
	if (ImGui_ImplWin32_WndProcHandler(hWnd, Message, wParam, lParam))
		return true;

	switch (Message)
	{
	case WM_DESTROY:
		xShutdown();
		PostQuitMessage(0);
		exit(4);
		break;
	case WM_SIZE:
		if (D3dDevice != NULL && wParam != SIZE_MINIMIZED)
		{
			ImGui_ImplDX9_InvalidateDeviceObjects();
			d3dpp.BackBufferWidth = LOWORD(lParam);
			d3dpp.BackBufferHeight = HIWORD(lParam);
			HRESULT hr = D3dDevice->Reset(&d3dpp);
			if (hr == D3DERR_INVALIDCALL)
				IM_ASSERT(0);
			ImGui_ImplDX9_CreateDeviceObjects();
		}
		break;
	default:
		return DefWindowProc(hWnd, Message, wParam, lParam);
		break;
	}
	return 0;
}

void xShutdown()
{
	TriBuf->Release();
	D3dDevice->Release();
	p_Object->Release();

	DestroyWindow(Window);
	UnregisterClass("Crosshair", NULL);

}
