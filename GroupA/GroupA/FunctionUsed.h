
#include <iostream>
#include <windows.h>
#include <MMSystem.h>
#include <conio.h>
#include <sstream>
#include <fstream>
#include <stdio.h>
#include <algorithm>
#include<string>
#include"Lecture.h"
#include"Staff.h"
#include"Student.h"
#pragma comment(lib, "winmm.lib")

using namespace std;
void menu();
void gotoxy(int x, int y);
void color(int x);
void draw(int x, int y, string str, int colorz);
void ReSize();
int VK_KEY(int n);
void safe();
void choosen();
void clear();
void ShowConsoleCursor(bool showFlag);

void login();
void doctuhamluubienhs(char* a, char* b, const char* path);
void xoahamluubienhs(const char* path);
void hamluubienlec(char* c, const char* path);
void hamluubienhs(char* c, const char* path);
void CSVloadtoTXT(const char* CSV, const char* TXT);
void loadALLcsvTotxt();
void loadALLtxtTocsv();
void TXTloadtoCSV(const char* TXT, const char* CSV);
