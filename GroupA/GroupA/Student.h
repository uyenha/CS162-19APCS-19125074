#pragma once
struct student {
	char password[100];
	char Cla[100];
	char firstname[100];
	char lastname[100];
	char ID[100];
	char sex[100];
	char dob[100];
	student* pNext;
};
void loadstudent(student*& S, const char* path);// load vo stu
bool checkstudent(char a[100], char b[100], student* c);
void menust();
void loadstudenttoMove(student*& S, const char* path);

void choosenst();
void loadbangdiemchohs();
void showschedule();
void changepass();
bool checkpass(char a[100], char b[100], student*& c);
void ViewattStu();
void menuAtt();
void choosemnAtt();
void checkinStu();
void saveStuatt(const char* path, Class* pHead);
