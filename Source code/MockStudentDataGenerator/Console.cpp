#include "Console.h"

HANDLE hConsoleOutput;
HANDLE hConsoleInput;

//Co dinh kich thuoc man hinh
void FixConsoleWindow() {
	HWND consoleWindow = GetConsoleWindow();
	LONG style = GetWindowLong(consoleWindow, GWL_STYLE);
	style = style & ~(WS_MAXIMIZEBOX) & ~(WS_THICKFRAME);
	SetWindowLong(consoleWindow, GWL_STYLE, style);
}

// Ham thay doi kich co man hinh console.
void resizeConsole(int width, int height)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width, height, TRUE);

}


// Ham dich chuyen con tro den toa do x, y.
void gotoxy(SHORT x, SHORT y)
{
	COORD Cursor_an_Pos = { x, y };
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
}

//Thay doi size chữ
void setFontSize(int FontSize)
{
	CONSOLE_FONT_INFOEX info = { 0 };
	info.cbSize = sizeof(info);
	info.dwFontSize.Y = FontSize; // leave X as zero
	info.FontWeight = FW_NORMAL;
	wcscpy_s(info.FaceName, L"Lucida Console");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), NULL, &info);
}

void Frames(int x, int y, int width, int length)
{
	int i;
	gotoxy(x, y); 
	for (i = 0; i < width; ++i) cout << char(196);
	for (i = 0; i < length; ++i)
	{
		gotoxy(x - 1, y + i + 1); cout << char(179);
		gotoxy(x + width, y + i + 1); cout << char(179);
	}
	gotoxy(x + width, y); cout << (char)191;
	gotoxy(x - 1, y + length + 1); cout << (char)192;
	gotoxy(x - 1, y); cout << (char)218;
	gotoxy(x + width, y + length + 1); cout << (char)217;
	gotoxy(x, y + length + 1); for (i = 0; i < width; ++i) cout << char(196);
}


void TextColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}