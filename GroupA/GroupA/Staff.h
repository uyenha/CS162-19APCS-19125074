#pragma once
#include"Lecture.h"
#include"Class.h"
#include"Student.h"
struct staff {
	int sex;
	char ID[100];
	char lastname[100];
	char firstname[100];
	char password[100];
	staff* pNext;
};
struct course {
	int no;
	int active;
	char ID[100];
	char name[100];
	char classs[100];
	char lecaccount[100];
	char start[100];
	char end[100];
	char day[100];
	char hourst[100];
	char hourend[100];
	char room[100];
	course* pNext;
};
void loadstaff(staff*& S, const char* path);// load vo S
bool checkstaff(char a[100], char b[100], staff* c);

void choosenstaff();
void staffmenu();
void classes();
void chooseclasses();
void showclass(const char* path);

void createcourse();
void chooseincourse();
void loadcourse(const char* path, course*& C);
void showcoursesinterm(course* a);
void findcourse(char* c, char* lop,course* a);
void showstudentincourse(course* a, int& i, const char* path);
void addnewcourse(course*& a, const char* path);
void createnewclassincourse(course* a);
void addlectureaccount(course* t);
//void removeStudent();
void xoakhoicourse(char* co, char* stu, Class*& save);
void xoakhoicourse2(char* co, char* stu, Class*& save);
void deldestudent(Class*& S, const char* path);
//void findcoursetoaddstudent(char* c);
//void addstudentincourse(const char*path);
void loadClass(Class*& cla, const char* path);
void yearandterm();
// about scoreboard//////////
void optionscore();
//void movestudent(const char* d, char*e, char*stu);
void luuvocoursecualopmoi(char* cou, student* sa, Class* save, student* luu);

void classoption();
void chooseoption();


void findcoursetoaddstudent(const char* c);
void addstudentincourse(const char* path);

//void movestudent(char* d, char*e, char*stu);
//void luuvocoursecualopmoi(char* cou, student *sa, Class*save, student *luu);
void movestudent(const char* d, const char* e, char* stu);

void atteStaff();