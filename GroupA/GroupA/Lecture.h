#pragma once
#include"Staff.h"
#include"Student.h"
struct lecture {
	int sex;
	char degree[100];
	char fullname[100];
	char ID[100];
	char password[100];
	lecture* pNext;
};

void loadlecture(lecture*& L, const char* path);// load vo lec
bool checklecture(char a[100], char b[100], lecture* c);
void lecturemenu();
void choosenlec();
void showbangdiemcualec();
void scoreoptionlec();
void choosescoreoption();
void suadiemchohs();
void ViewattendenceLec();
void EditattendenceLec();
bool loadAttendenceCSV(Class*& pHead, const char* path);
void saveAttendenceCSV(Class*& pHead);
void saveAttendenceCSV(Class*& pHead,char *path);
void chooseOptionLec();