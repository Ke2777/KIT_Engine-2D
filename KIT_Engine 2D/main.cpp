#include <DXUT/DXUT.h>
#pragma comment(lib, "legacy_stdio_definitions.lib")
#pragma comment (lib, "comctl32.lib")

VOID OnFrameRender(
	IDirect3DDevice9* pd3dDevice,
	DOUBLE fTime,
	FLOAT fElapsedTime,
	void* pUserContext
)
{
	pd3dDevice->Clear(0, nullptr, D3DCLEAR_TARGET, D3DCOLOR_XRGB(255,0,255), 0.1f, 0);
}

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow)
{
	DXUTSetD3DVersionSupport(true, false);
	DXUTInit();
	DXUTCreateWindow(L"KIT - Engine 2D", hInstance, NULL, NULL, 200, 200);
	DXUTCreateDevice(true, 700, 700);
	DXUTSetCallbackD3D9FrameRender(OnFrameRender);
	DXUTMainLoop();
}