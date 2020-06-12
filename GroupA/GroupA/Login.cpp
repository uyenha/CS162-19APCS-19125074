// this is for student
#include"FunctionUsed.h"
#include"Lecture.h"
#include"Staff.h"
#include"Student.h"
void login() {
	char a[100];
	char b[100];
	student* stu = nullptr;
	staff* S = nullptr;
	lecture* lec = nullptr;
	loadstaff(S, "C:/Users/Admin/Desktop/Project/GroupA/Staff.csv");
	loadstudent(stu, "C:/Users/Admin/Desktop/Project/GroupA/Student.csv");
	loadlecture(lec, "C:/Users/Admin/Desktop/Project/GroupA/Lecture.csv");
	while (1) {
		draw(50, 10, "Enter account: ", 14);
		draw(50, 13, "Enter password: ", 14);
		gotoxy(65, 10);
		cin.get(a, 100, '\n');
		cin.ignore();
		gotoxy(66, 13);
		int i = 0;
		while (1)
		{
			char c = _getch();
			if (c != '\r' && c != '\b')
			{
				cout << '*';
				b[i] = c;
				i++;
			}
			else if (c == '\r') {
				b[i] = '\0';
				break;
			}
			else if (c == '\b')
			{
				--i;
				if (i < 0)
					i = 0;
				b[i] = b[i + 1];
				clear();
				draw(50, 10, "Enter account: ", 14);
				gotoxy(65, 10);
				for (int k = 0; k < strlen(a); k++)
					cout << a[k];
				draw(50, 13, "Enter password: ", 14);
				gotoxy(66, 13);
				for (int k = 0; k < i; k++)
					cout << '*';
			}
		}
		if (checkstaff(a, b, S))
		{
			draw(50, 15, "Welcome Staff", 11);
			Sleep(1000);
			clear();
			staffmenu();
			delete S;
		}
		else if (checkstudent(a, b, stu)) {
			draw(50, 15, "Welcome Student", 11);
			Sleep(1000);
			clear();
			menust();
			delete stu;
		}
		else if (checklecture(a, b, lec)) {
			draw(50, 15, "Welcome Professor", 11);
			Sleep(1000);
			clear();
			lecturemenu();
			delete lec;
		}
		else {
			draw(50, 15, "Something Wrong. Please input again", 12);
			Sleep(900);
			clear();
			login();
		}
	}
}
//chua ID va DoB*/
void loadstaff(staff*& S, const char* path) { //check if whether the program read every line or not (fin.ignore() may work wrong))
	ifstream fin;
	staff* now = new staff;
	staff* tmp = nullptr;
	fin.open(path);
	int num = 0;
	fin>>num;
	fin.get();
	int count = 0;
	do {
		if (S == nullptr) {
			S = new staff;
			now = S;
		}
		else {
			now->pNext = new staff;
			tmp = now;
			now = now->pNext;
		}
		string temp;
		getline(fin, temp);
		fin.getline(now->ID,100);
		fin.getline(now->password, 100);
		fin.getline(now->lastname, 100);
		fin.getline(now->firstname, 100);
		fin>>now->sex;
		fin.get();
		count = count + 1;
		now->pNext = nullptr;
	} while (count<num);
	fin.close();
}
void loadstudent(student*& S, const char* path) {//load de check log in
	ifstream fin;
	student* now = new student;
	student* tmp = nullptr;
	fin.open(path);
	int num;
	fin >> num;
	int count = 0;
	fin.ignore(1000, '\n');
	do {
		if (S == nullptr) {
			S = new student;
			now = S;
		}
		else {
			now->pNext = new student;
			tmp = now;
			now = now->pNext;
		}
		fin.getline(now->ID, 100, '\n');
		fin.getline(now->password, 100, '\n');
		fin.getline(now->lastname, 100, '\n');
		fin.getline(now->firstname, 100, '\n');
		fin.getline(now->dob, 100, '\n');
		fin.getline(now->Cla, 100, '\n');
		fin.getline(now->sex, 100, '\n');
		now->pNext = nullptr;
		count++;
	} while (count<num);
	fin.close();
}
void loadstudenttoMove(student*& S, const char* path) {//load de check log in
	ifstream fin;
	student* now = new student;
	student* tmp = nullptr;
	fin.open(path);
	int count = 0;
	fin.ignore(1000, '\n');
	int n;
	while (fin>>n)
	{
		if (S == nullptr) {
			S = new student;
			now = S;
		}
		else {
			now->pNext = new student;
			tmp = now;
			now = now->pNext;
		}
		fin.get();
		fin.getline(now->ID, 100, ',');
		fin.getline(now->lastname, 100, ',');
		fin.getline(now->firstname, 100, ',');
		fin.getline(now->dob, 100, ',');
		fin.getline(now->sex, 100, ',');
		fin.getline(now->Cla, 100, '\n');
		now->pNext = nullptr;
		count++;
	} 
	fin.close();
}
void loadlecture(lecture*& L, const char* path) {
	ifstream fin;
	lecture* now = new lecture;
	lecture* tmp = nullptr;
	fin.open(path);
	int num;
	fin >> num;
	int count = 0;
	fin.ignore(1000, '\n');
	fin.get();
	do {
		if (L == nullptr) {
			L = new lecture;
			now = L;
		}
		else {
			now->pNext = new lecture;
			tmp = now;
			now = now->pNext;
		}
		//fin.ignore();
		fin.get(now->ID, 100, '\n');
		fin.ignore();
		//fin.get(now->lname, 100, ',');
		//fin.ignore();
		fin.get(now->password, 100, '\n');
		fin.ignore();
		fin.get(now->fullname, 100, '\n');
		fin.ignore();
		fin.get(now->degree, 100, '\n');
		fin.ignore();
		fin >> now->sex;
		fin.get();
		fin.ignore(1000, '\n');
		count = count + 1;
		now->pNext = nullptr;
	} while (count<num);
	fin.close();
}
bool checkstudent(char a[100], char b[100], student* c) {
	while (c != NULL) {
		if (strcmp(c->ID, a) == 0 && strcmp(c->password, b) == 0) {
			ofstream fout("menu.txt");
			fout << a << endl;
			fout.close();
			return true;
		}
		else c = c->pNext;
	}
	return false;
}
bool checkstaff(char a[100], char b[100], staff* c)
{
	while (c != NULL) {
		if (strcmp(c->password, b) == 0 && strcmp(c->ID, a) == 0) {
			return true;
		}
		else c = c->pNext;
	}
	return false;
}
bool checklecture(char a[100], char b[100], lecture* c) {//fix dia chi file
	while (c != NULL) {
		if (strcmp(c->password, b) == 0 && strcmp(c->ID, a) == 0) {
			//hamluubienlec(b, "C:/Users/Admin/Desktop/Project/GroupA/LecturerName.csv");
			ofstream fout;
			fout.open("C:/Users/Admin/Desktop/Project/GroupA/Menu.txt");
			//fout.open("Save.txt");
			fout << c->ID;
			fout.close();
			CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/LecturerName.csv", "C:/Users/Admin/Desktop/Project/GroupA/LecturerName.txt");
			return true;
		}
		else c = c->pNext;
	}
	return false;
}

void doctuhamluubienhs(char* a, char* b, const char* path) {
	ifstream fin;
	fin.open(path);
	fin.get(a, 100, ',');
	fin.ignore();
	fin.get(b, 100, ',');
	fin.ignore();
	fin.close();
}
void xoahamluubienhs(const char* path) {
	ofstream fout;
	fout.open(path);
	fout << "";
	fout.close();
}
void hamluubienlec(char* c, const char* path) {
	ofstream fout;
	fout.open(path, ios::app);
	fout << c << ',';
	fout.close();
}
void hamluubienhs(char* c, const char* path) {
	ofstream fout;
	fout.open(path, ios::app);
	fout << c << ',';
	fout.close();
}