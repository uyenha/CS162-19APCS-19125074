#include"FunctionUsed.h"
#include"Staff.h"
#include"Class.h"
#include"Student.h"

// about option class////
void classoption() {
	draw(56, 10, "1.View Class", 11);
	draw(56, 11, "2.Remove a student from a class", 11);
	draw(56, 12, "3.Move student from class to class", 11);
	draw(56, 13, "RETURN", 14);
	chooseoption();

}
void chooseoption() { //checkagain Course->Lecturer
	ShowConsoleCursor(false);
	//loadAllCSVtoTXT();
	Class* pHead = nullptr;
	//loadClasses(pHead);
	safe();
	int n = 1;
	while (1)
	{
		if (n == 1)
		{
			draw(56, 10, "1.View Class", 81);
			draw(56, 11, "2.Remove a student from a class", 11);
			draw(56, 12, "3.Move student from class to class", 11);
			draw(56, 13, "RETURN", 14);
		}
		if (n == 2)
		{
			draw(56, 10, "1.View Class", 11);
			draw(56, 11, "2.Remove a student from a class", 81);
			draw(56, 12, "3.Move student from class to class", 11);
			draw(56, 13, "RETURN", 14);
		}
		if (n == 3)
		{
			draw(56, 10, "1.View Class", 11);
			draw(56, 11, "2.Remove a student from a class", 11);
			draw(56, 12, "3.Move student from class to class", 81);
			draw(56, 13, "RETURN", 14);
		}
		if (n == 4)
		{
			draw(56, 10, "1.View Class", 11);
			draw(56, 11, "2.Remove a student from a class", 11);
			draw(56, 12, "3.Move student from class to class", 11);
			draw(56, 13, "RETURN", 81);
		}

		n = VK_KEY(n);
		if (n == 101) {
			Sleep(400);
			clear();
			classes();
		}
		if (n == 102) {
			clear();
			char stuname[100];
			cout << "Enter student's ID to remove from a class: ";
			cin.get(stuname, 100, '\n');
			cin.ignore();
			char cl[100];
			cout << "The class to remove student (Ex:19APCS1,...):";
			cin.get(cl, 100, '\n');
			cin.ignore();
			course* doi = nullptr;
			loadcourse("C:/Users/Admin/Desktop/Project/GroupA/Schedule.csv", doi);
			course* l = doi;
			Class* ss = new Class;
			while (l != NULL) {
				if (strcmp(l->classs, cl) == 0) {
					xoakhoicourse(cl, stuname, ss);
				}
				l = l->pNext;
			}
			/*if (strcmp(cl, "19APCS1") == 0)
				movestudent("Class 1", "0", stuname);

			if (strcmp(cl, "19APCS2") == 0)
				movestudent("Class 2", "0", stuname);*/
			cout << "Removed successfully..." << endl;
			Sleep(800);
			clear();
			classoption();
		}
		if (n == 103) {
			clear();
			cout << "Student's ID to move: ";
			char stud[100];
			cin.get(stud, 100, '\n');
			cin.ignore();
			char d[100];
			cout << "Which class move from? (Ex: Class 1,..)";
			cin.get(d, 100, '\n');// nhap d:Class2...
			cin.ignore();
			char e[100];
			cout << "Which class move in? (Ex:Class 2)";// nhap e:Class2...
			cin.get(e, 100, '\n');
			cin.ignore();
			movestudent(d, e, stud);
			cout << "Move successfully..." << endl;
			Sleep(700);
			clear();
			classoption();
		}
		if (n == 104) {
			clear();
			staffmenu();
		}
	}
}
void classes() {
	draw(56, 10, "1.19APCS1", 11);
	draw(56, 11, "2.19APCS2", 11);
	draw(56, 12, "RETURN", 11);
	chooseclasses();
}
void chooseclasses() {
	ShowConsoleCursor(false);
	safe();
	Sleep(700);
	int n = 1;
	while (1)
	{
		if (n == 1)
		{
			draw(56, 10, "1.19APCS1", 81);
			draw(56, 11, "2.19APCS2", 11);
			draw(56, 12, "RETURN", 11);
		}
		if (n == 2)
		{
			draw(56, 10, "1.19APCS1", 11);
			draw(56, 11, "2.19APCS2", 81);
			draw(56, 12, "RETURN", 11);
		}
		if (n == 3)
		{
			draw(56, 10, "1.19APCS1", 11);
			draw(56, 11, "2.19APCS2", 11);
			draw(56, 12, "RETURN", 81);
		}
		n = VK_KEY(n);
		if (n == 101) {
			clear();
			showclass("C:/Users/Admin/Desktop/Project/GroupA/19APCS1.csv");
		}
		if (n == 102) {
			clear();
			showclass("C:/Users/Admin/Desktop/Project/GroupA/19APCS2.csv");
		}
		if (n == 103) {
			clear();
			classoption();
		}
	}
	}
void showclass(const char* path) {
	ifstream fin;
	bool landau = true;
	Class* now = new Class;
	Class* cur = now;
	Class* tmp = nullptr;
	int x;
	fin.open(path);
	string b;
	getline(fin, b);
	while (!fin.eof()) {
		if (landau == false)
		{
			while (cur->pNext != NULL) {
				cur = cur->pNext;
			}
			cur->pNext = new Class;
			tmp = cur;
			cur = cur->pNext;
		}
		fin >> x;
		fin.ignore();
		fin.get(cur->ID, 100, ',');
		fin.ignore();
		fin.get(cur->lname, 100, ',');
		fin.ignore();
		fin.get(cur->fname, 100, ',');
		fin.ignore();
		fin.get(cur->dob, 100, ',');
		fin.ignore();
		fin.get(cur->name, 100, '\n');
		fin.ignore();
		cur->pNext = NULL;
		landau = false;
	}
	tmp->pNext = NULL;
	draw(20, 10, "Class     No   Student ID   Last Name          First Name     DoB       ", 15);
	int y = 11;
	int j = 1;
	while (now != NULL) {
		gotoxy(20, y);
		cout << now->name;
		gotoxy(30, y);
		cout << j;
		gotoxy(35, y);
		cout << now->ID;
		gotoxy(48, y);
		cout << now->lname;
		gotoxy(67, y);
		cout << now->fname;
		gotoxy(82, y);
		cout << now->dob;
		++y;
		++j;
		now = now->pNext;
	}
	draw(50, y + 1, "Press enter to Return", 14);
	int n = 0;
	n = VK_KEY(n);
	if (n == 100) {
		clear();
		classes();
	}
	fin.close();

}
void loadClass(Class*& cla, const char* path) {
	ifstream fin;
	Class* cur = cla;
	Class* tmp = nullptr;
	bool first = true;
	fin.open(path);
	fin.ignore(1000, '\n');
	while (!fin.eof()) {
		if (cla == nullptr)
		{
			cla = new Class;
			cur = cla;
		}
		else
		{
			while (cur->pNext != NULL) {
				cur = cur->pNext;
			}
			cur->pNext = new Class;
			tmp = cur;
			cur = cur->pNext;
		}
		if (first == false)
			fin.ignore(100, '\n');
		fin.get(cur->name, 100, ',');
		fin.ignore();
		fin.get(cur->ID, 100, ',');
		fin.ignore();
		fin.get(cur->lname, 100, ',');
		fin.ignore();
		fin.get(cur->fname, 100, ',');
		fin.ignore();
		fin.get(cur->gen, 100, ',');
		fin.ignore();
		fin.get(cur->dob, 100, ',');
		fin.ignore();
		fin >> cur->ass;
		fin.ignore();
		fin >> cur->mid;
		fin.ignore();
		fin >> cur->final;
		fin.ignore();
		fin >> cur->total;
		cur->pNext = NULL;
		first = false;
		//cla = cla->pNext;
	}
	tmp->pNext = NULL;
	fin.close();

}



void movestudent(const char* d, const char* e, char* stu) {// d lop cu. e lop moi. stu Id sudent checkagain BIG PROBLEM
	char diachi1[100];
	// xoa trong class///
	student* luu = new student;
	if (strcmp(d, "0") != 0) { // remove student from class. d la ten lop remove. e la llop chuyen vao
		char diachi[100];
		strcpy_s(diachi1, "C:/Users/Admin/Desktop/Project/GroupA/");
		strcat_s(diachi1, d);
		strcat_s(diachi1, ".csv");
		student* cur = nullptr;
		loadstudenttoMove(cur, diachi1);
		student* tmp = cur;
		while (tmp->pNext != NULL) {
			if (strcmp(cur->ID, stu) == 0) {
				//student*n = cur;
				luu = cur;//luu du lieu trong class
				cur = cur->pNext;
				break;
			}
			if (strcmp(tmp->pNext->ID, stu) == 0) {
				luu = tmp->pNext;
				tmp->pNext = tmp->pNext->pNext;
				break;
			}
			else if (tmp->pNext != NULL)
				tmp = tmp->pNext;
			else tmp->pNext = NULL;
		}
		ofstream fout;
		fout.open(diachi1);
		int o = 0;
		student* y = cur;
		fout << "No,Student ID,Last name,First name,Dob,Gender,Class" << endl;
		while (y != NULL) {
			fout <<  ++o << "," << y->ID << "," << y->lastname << "," << y->firstname  << "," << y->dob << "," << y->sex <<","<<y->Cla<< endl;
			y = y->pNext;
		}
		fout.close();// xoa trong lop cu
		//delete y;
	}
	if (strcmp(e, "0") != 0) {
		ofstream fout;
		char diachi2[100];
		strcpy_s(diachi2, "C:/Users/Admin/Desktop/Project/GroupA/");
		strcat_s(diachi2, e);
		strcat_s(diachi2, ".csv");
		fout.open(diachi2, ios::app);
		int n = 1;
		student* sa = nullptr;
		loadstudenttoMove(sa, diachi2);
		while (sa != NULL)
		{
			sa = sa->pNext;
			n++;
		}
		fout << n<<","  << luu->ID << ","   << luu->lastname << "," << luu->firstname << "," << luu->dob<<"," << e<< endl;
		fout.close();// luu vo lop moi
	}

}
void luuvocoursecualopmoi(char* cou, student* sa, Class* save, student* luu) {
	char diachi3[100];
	strcpy_s(diachi3, "C:/Users/Admin/Desktop/Project/GroupA/");
	strcat_s(diachi3, cou);
	strcat_s(diachi3, ".csv");
	Class* hsmoi = nullptr;
	Class* oi = hsmoi;
	Class* chi = save;
	while (oi->pNext != NULL && strcmp(oi->pNext->name, sa->Cla) != 0)
		oi = oi->pNext;
	while (oi->pNext != NULL && strcmp(oi->pNext->name, sa->Cla) == 0)
		oi = oi->pNext;
	//while (oi->pNext != NULL && strcmp(oi->pNext->name, luu->Cla) != 0)
		//oi = oi->pNext;

	strcpy_s(save->name, oi->name);
	if (oi->pNext == NULL) {
		oi->pNext = save;
		oi->pNext->pNext = NULL;
	}
	else if (oi->pNext != NULL) {
		save->pNext = oi->pNext;
		oi->pNext = save;
	}
	ofstream fout;
	fout.open(diachi3);
	//checkagain SUA LAI KHUC NAO
	fout << "Class,Student ID,Last name,First name,DoB" << endl;
	int n = 1;
	while (hsmoi != NULL) {
		fout <<n<<"," << "," << luu->ID << "," << "," << luu->lastname << "," << luu->firstname << "," << luu->dob << sa->Cla<< endl;
		hsmoi = hsmoi->pNext;
	}
}