#include "FunctionUsed.h"

void menu()
{
	ReSize();
	draw(60, 7, " ____  _              _             _   ", 10);
	draw(60, 8, "/  ___| |            | |           | |  ", 10);
	draw(60, 9, "\\ `--.| |_ _   _   __| | ___ _ __  | |_ ", 10);
	draw(60, 10, " `--. \\ __| | | | / _` |/ _ \\ '_ \\ | __|", 10);
	draw(60, 11, "/\\__/ / |_| |_| || (_| |  __/ | | || |_ ", 10);
	draw(60, 12, "\\____/ \\__|\\__,_| \\__,_|\\___|_| |_| \\__|", 10);

	draw(30, 14, "___  ___                                                             _____            _                 ", 10);
	draw(30, 15, "|  \\/  |                                                     _      /  ___|          | |                          ", 10);
	draw(30, 16, "| .  . | __ _  _ __   __ _  __ _   ___ _ __ ___    ___ _ __ | |_    \\ `--. _   _ ___ | |_ ___ _ __ ___        ", 10);
	draw(30, 17, "| |\\/| |/ _` || '_ \\ / _` |/ _` | / _ \\ '_ ` _ \\  / _ \\ '_ \\| __|    `--. \\ | | / __|| __/ _ \\ '_ ` _ \\  ", 10);
	draw(30, 18, "| |  | | (_| || | | | (_| | (_| ||  __/ | | | | ||  __/ | | | |_    /\\__/ / |_| \\__ \\| ||  __/ | | | | | ", 10);
	draw(30, 19, "\\_|  |_/\\__,_||_| |_|\\__,_|\\__, | \\___|_| |_| |_| \\___|_| |_|\\__|   \\____/ \\__, |___/ \\__\\___|_| |_| |_|", 10);
	draw(30, 20, "                           __/ |                                           __/ |     ", 10);
	draw(30, 21, "                          |___/                                           |___/      ", 10);

	draw(75, 30, "Log in", 14);
	draw(75, 31, "Exit", 14);
	choosen();

}
void gotoxy(int x, int y)
{
	HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { x ,y };
	SetConsoleCursorPosition(output, pos);
}
void color(int x)
{
	HANDLE hconsoleColor;
	hconsoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hconsoleColor, x);
}
void draw(int x, int y, string str, int colorz)
{
	gotoxy(x, y);
	color(colorz);
	cout << str;
	color(7);
}
void ReSize()
{
	HANDLE Output = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD Coordinates = { 200,70 };
	SetConsoleScreenBufferSize(Output, Coordinates);
	SMALL_RECT Coordinates2 = { 19, 10, 10, 10 };
	SetConsoleWindowInfo(Output, TRUE, &Coordinates2);
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
}
int VK_KEY(int n) {
	while (1)
	{
		char a = _getch();
		if (GetAsyncKeyState(VK_DOWN)) {
			n += 1;
			break;
		}
		else if (GetAsyncKeyState(VK_UP)) {
			n -= 1;
			break;
		}
		if (a == (VK_RETURN)) {
			n += 100;
			break;
		}
	}
	Sleep(130);
	return n;
}
void choosen()
{
	ShowConsoleCursor(false);
	safe();
	Sleep(700);
	int n = 1;
	while (1)
	{
		if (n == 1)
		{
			draw(75, 31, "Exit", 14);
			draw(75, 30, "Log in", 128);
		}
		if (n == 2)
		{
			draw(75, 30, "Log in", 14);
			draw(75, 31, "Exit", 128);
		}
		n = VK_KEY(n);
		if (n == 101) {
			draw(75, 30, "Log in", 198);
			Sleep(100);
			draw(75, 30, "Log in", 118);
			Sleep(100);
			draw(75, 30, "Log in", 198);
			Sleep(100);
			draw(75, 30, "Log in", 118);
			clear();
			login();
		}
		if (n == 102) {
			draw(75, 31, "Exit", 198);
			Sleep(100);
			draw(75, 31, "Exit", 118);
			Sleep(100);
			draw(75, 31, "Exit", 198);
			Sleep(100);
			draw(75, 31, "Exit", 118);
			clear();
			xoahamluubienhs("C:/Users/Admin/Desktop/Project/GroupA/Lecturer.csv");
			xoahamluubienhs("C:/Users/Admin/Desktop/Project/GroupA/LecturerName.csv");
			xoahamluubienhs("C:/Users/Admin/Desktop/Project/GroupA/Save.txt");
			exit(0);
		}
	}
}
void safe()
{
	while (_kbhit()) _getch();
}
void clear()
{
	COORD topLeft = { 0, 0 };
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO screen;
	DWORD written;

	GetConsoleScreenBufferInfo(console, &screen);
	FillConsoleOutputCharacterA(
		console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written
	);
	FillConsoleOutputAttribute(
		console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
		screen.dwSize.X * screen.dwSize.Y, topLeft, &written
	);
	SetConsoleCursorPosition(console, topLeft);
}
void ShowConsoleCursor(bool showFlag)
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO     cursorInfo;

	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = showFlag; // set the cursor visibility
	SetConsoleCursorInfo(out, &cursorInfo);
}
