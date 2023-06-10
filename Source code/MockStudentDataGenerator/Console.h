#pragma once
#include <iostream>
#include <Windows.h>
#include <Shlwapi.h>
#include <conio.h>
using namespace std;

void FixConsoleWindow();
void resizeConsole(int width, int height);
void gotoxy(SHORT x, SHORT y);
void setFontSize(int FontSize);
void Frames(int x, int y, int width, int length);
void TextColor(int color);


