#include <Windows.h>

int rectangleWidth = 200;
int rectangleHeight = 50;

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
    case WM_CLOSE:
        DestroyWindow(hwnd);
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    case WM_SIZE:
        rectangleWidth = LOWORD(lParam);
        rectangleHeight = HIWORD(lParam);
        break;
    default:
        return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
    return 0;
}

int main() {
    WNDCLASS wc = {};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = GetModuleHandle(nullptr);
    wc.lpszClassName = L"ResizableRectangleClass";
    RegisterClass(&wc);

    HWND hwnd = CreateWindowEx(0, wc.lpszClassName, L"Resizable Rectangle", WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 800, 500, nullptr, nullptr, wc.hInstance, nullptr);

    if (!hwnd) {
        MessageBox(nullptr, L"Failed to create window", L"Error", MB_OK | MB_ICONERROR);
        return -1;
    }

    ShowWindow(hwnd, SW_SHOWNORMAL);
    UpdateWindow(hwnd);

    MSG msg = {};
    while (GetMessage(&msg, nullptr, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}