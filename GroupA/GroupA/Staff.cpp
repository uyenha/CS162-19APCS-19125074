// this is for staff
#include"FunctionUsed.h"
#include"Staff.h"
#include"Class.h"
#include"Student.h"

void staffmenu() {
	clear();
	draw(50, 5, " _____ _____ _____ _____ _____ ", 15);
	draw(50, 6, "|   __|_   _|  _  |   __|   __|", 15);
	draw(50, 7, "|__   | | | |     |   __|   __|", 15);
	draw(50, 8, "|_____| |_| |__|__|__|  |__|   ", 15);
	draw(56, 10, "1.Class", 11);
	draw(56, 11, "2.Course", 11);
	draw(56, 12, "3.Scoreboard", 11);
	draw(56, 13, "4.Attendence List", 11);
	draw(56, 14, "5.Log out", 11);
	choosenstaff();
}
void choosenstaff()
{
	ShowConsoleCursor(false);
	safe();
	Sleep(700);
	int n = 1;
	while (1)
	{
		if (n == 1)
		{
			draw(56, 10, "1.Class", 81);
			draw(56, 11, "2.Course", 11);
			draw(56, 12, "3.Scoreboard", 11);
			draw(56, 13, "4.Attendence List", 11);
			draw(56, 14, "5.Log out", 11);
		}
		if (n == 2)
		{
			draw(56, 10, "1.Class", 11);
			draw(56, 11, "2.Course", 81);
			draw(56, 12, "3.Scoreboard", 11);
			draw(56, 13, "4.Attendence List", 11);
			draw(56, 14, "5.Log out", 11);
		}
		if (n == 3)
		{
			draw(56, 10, "1.Class", 11);
			draw(56, 11, "2.Course", 11);
			draw(56, 12, "3.Scoreboard", 81);
			draw(56, 13, "4.Attendence List", 11);
			draw(56, 14, "5.Log out", 11);
		}
		if (n == 4)
		{
			draw(56, 10, "1.Class", 11);
			draw(56, 11, "2.Course", 11);
			draw(56, 12, "3.Scoreboard", 11);
			draw(56, 13, "4.Attendence List", 81);
			draw(56, 14, "5.Log out", 11);
		}
		if (n == 5)
		{
			draw(56, 10, "1.Class", 11);
			draw(56, 11, "2.Course", 11);
			draw(56, 12, "3.Scoreboard", 11);
			draw(56, 13, "4.Attendence List", 11);
			draw(56, 14, "5.Log out", 81);
		}
		n = VK_KEY(n);
		if (n == 101) {
			draw(56, 10, "1.Class", 198);
			Sleep(100);
			draw(56, 10, "1.Class", 118);
			Sleep(100);
			draw(56, 10, "1.Class", 198);
			Sleep(100);
			draw(56, 10, "1.Class", 118);
			clear();
			classoption();
		}
		if (n == 102) {
			draw(56, 11, "2.Course", 198);
			Sleep(100);
			draw(56, 11, "2.Course", 118);
			Sleep(100);
			draw(56, 11, "2.Course", 198);
			Sleep(100);
			draw(56, 11, "2.Course", 118);
			clear();
			createcourse();
		}
		if (n == 103) {
			draw(56, 12, "3.Scoreboard", 198);
			Sleep(100);
			draw(56, 12, "3.Scoreboard", 118);
			Sleep(100);
			draw(56, 12, "3.Scoreboard", 198);
			Sleep(100);
			draw(56, 12, "3.Scoreboard", 118);
			clear();
			optionscore();
			//exit(0);
		}
		if (n == 104) {
			draw(56, 13, "4.Attendence List", 198);
			Sleep(100);
			draw(56, 13, "4.Attendence List", 118);
			Sleep(100);
			draw(56, 13, "4.Attendence List", 198);
			Sleep(100);
			draw(56, 13, "4.Attendence List", 118);
			clear();
			atteStaff();
			int n = 0;
			n = VK_KEY(n);
			if (n == 100) {
				Sleep(500);
				clear();
				staffmenu();
			}
			//menu();
		}
		if (n == 105) {
			draw(56, 14, "5.Log out", 198);
			Sleep(100);
			draw(56, 14, "5.Log out", 118);
			Sleep(100);
			draw(56, 14, "5.Log out", 198);
			Sleep(100);
			draw(56, 14, "5.Log out", 118);
			clear();
			menu();
		}
	}
}

//about course////////////////////////
void createcourse() {
	draw(50, 10, "1.View all courses in term", 11);
	draw(50, 11, "2.View class of course", 11);
	draw(50, 12, "3.Create a new course", 11);
	draw(50, 13, "4.Remove a student from a course", 11);
	draw(50, 14, "5.About academic years and semesters", 11);
	draw(50, 15, "6.Add a specific student to a course", 11);
	draw(50, 16, "RETURN", 15);
	chooseincourse();
}
void chooseincourse()
{
	ShowConsoleCursor(false);
	safe();
	Sleep(700);
	course* pcourse = nullptr;
	loadcourse("C:/Users/Admin/Desktop/Project/GroupA/Schedule.csv", pcourse);
	int n = 1;
	while (1)
	{
		if (n == 1)
		{
			draw(50, 10, "1.View all courses in term", 81);
			draw(50, 11, "2.View class of course", 11);
			draw(50, 12, "3.Create a new course", 11);
			draw(50, 13, "4.Remove a student from a course", 11);
			draw(50, 14, "5.About academic years and semesters", 11);
			draw(50, 15, "6.Add a specific student to a course", 11);
			draw(50, 16, "RETURN", 15);
		}
		if (n == 2)
		{
			draw(50, 10, "1.View all courses in term", 11);
			draw(50, 11, "2.View class of course", 81);
			draw(50, 12, "3.Create a new course", 11);
			draw(50, 13, "4.Remove a student from a course", 11);
			draw(50, 14, "5.About academic years and semesters", 11);
			draw(50, 15, "6.Add a specific student to a course", 11);
			draw(50, 16, "RETURN", 15);
		}
		if (n == 3)
		{
			draw(50, 10, "1.View all courses in term", 11);
			draw(50, 11, "2.View class of course", 11);
			draw(50, 12, "3.Create a new course", 81);
			draw(50, 13, "4.Remove a student from a course", 11);
			draw(50, 14, "5.About academic years and semesters", 11);
			draw(50, 15, "6.Add a specific student to a course", 11);
			draw(50, 16, "RETURN", 15);
		}
		if (n == 4)
		{
			draw(50, 10, "1.View all courses in term", 11);
			draw(50, 11, "2.View class of course", 11);
			draw(50, 12, "3.Create a new course", 11);
			draw(50, 13, "4.Remove a student from a course", 81);
			draw(50, 14, "5.About academic years and semesters", 11);
			draw(50, 15, "6.Add a specific student to a course", 11);
			draw(50, 16, "RETURN", 15);
		}
		if (n == 5)
		{
			draw(50, 10, "1.View all courses in term", 11);
			draw(50, 11, "2.View class of course", 11);
			draw(50, 12, "3.Create a new course", 11);
			draw(50, 13, "4.Remove a student from a course", 11);
			draw(50, 14, "5.About academic years and semesters", 81);
			draw(50, 15, "6.Add a specific student to a course", 11);
			draw(50, 16, "RETURN", 15);
		}
		if (n == 6)
		{
			draw(50, 10, "1.View all courses in term", 11);
			draw(50, 11, "2.View class of course", 11);
			draw(50, 12, "3.Create a new course", 11);
			draw(50, 13, "4.Remove a student from a course", 11);
			draw(50, 14, "5.About academic years and semesters", 11);
			draw(50, 15, "6.Add a specific student to a course", 81);
			draw(50, 16, "RETURN", 15);
		}
		if (n == 7) {
			draw(50, 10, "1.View all courses in term", 11);
			draw(50, 11, "2.View class of course", 11);
			draw(50, 12, "3.Create a new course", 11);
			draw(50, 13, "4.Remove a student from a course", 11);
			draw(50, 14, "5.About academic years and semesters", 11);
			draw(50, 15, "6.Add a specific student to a course", 11);
			draw(50, 16, "RETURN", 14);
		}

		n = VK_KEY(n);
		if (n == 101) {
			Sleep(400);
			clear();
			showcoursesinterm(pcourse);
		}
		if (n == 102) {
			Sleep(400);
			clear();
			char c2[100];
			draw(40, 10, "Enter class: ", 15);
			cin.get(c2, 100, '\n');
			cin.get();
			draw(40, 11, "What course you want to show? Input their ID: ", 15);
			char c[100];
			cin.get(c, 100, '\n');
			cin.ignore();
			Sleep(400);
			findcourse(c,c2, pcourse);//
		}
		if (n == 103) {
			Sleep(400);
			clear();
			addnewcourse(pcourse, "C:/Users/Admin/Desktop/Project/GroupA/Schedule.csv");
			draw(21, 20, "Created a new coure...", 12);
			Sleep(1000);
			clear();
			createcourse();
		}
		if (n == 104) {
			Sleep(400);
			clear();
			char cou[100];
			char stu[100];
			draw(0, 0, "What course to remove a student?(Ex: CS161,...)", 14);
			cin.get(cou, 100, '\n');
			cin.ignore();
			char cla[100];
			draw(0, 1, "What class?(Ex: 19APCS1,...)", 14);
			cin.get(cla, 100, '\n');
			cin.ignore();
			char a3[2];
			a3[0] = '_';
			a3[1] = '\0';
			strcat_s(cla, a3);
			strcat_s(cla, cou);

			draw(0, 2, "Input student's ID: ", 14);
			cin.get(stu, 100, '\n');
			cin.ignore();
			Class* save = new Class;
			xoakhoicourse2(cla, stu, save);
			delete save;
			draw(14, 20, "Remove successfully", 12);
			Sleep(1000);
			clear();
			createcourse();
		}
		if (n == 105) {
			Sleep(400);
			clear();
			yearandterm();
		}
		if (n == 106) {
			Sleep(400);
			clear();
			char c[100];
			cout << "What course's ID to add student?(Example: CS161,...)";
			cin.get(c, 100, '\n');
			cin.ignore();
			findcoursetoaddstudent(c);
			int n = 0;
			n = VK_KEY(n);
			if (n == 100) {
				Sleep(500);
				clear();
				createcourse();
			}
		}
		if (n == 107) {
			Sleep(400);
			clear();
			staffmenu();
		}


	}
}
void loadcourse(const char* path, course*& C) {
	ifstream fin;
	course* now = nullptr;
	course* tmp = new course;
	bool first = true;
	fin.open(path);
	fin.ignore(1000, '\n');
	while (!fin.eof()) {
		if (C == nullptr)
		{
			C = new course;
			tmp = C;
		}
		else
		{
			tmp->pNext = new course;
			now = tmp;
			tmp = tmp->pNext;
		}
		fin >> tmp->no;
		if (first == false && tmp->no < 0) {
			now->pNext = NULL;
			break;
		}
		fin.ignore();
		fin.get(tmp->ID, 100, ',');
		fin.ignore();
		fin.get(tmp->name, 100, ',');
		fin.ignore();
		fin.get(tmp->classs, 100, ',');
		fin.ignore();
		fin.get(tmp->lecaccount, 100, ',');
		fin.ignore();
		fin.get(tmp->start, 100, ',');
		fin.ignore();
		fin.get(tmp->end, 100, ',');
		fin.ignore();
		fin.get(tmp->day, 100, ',');
		fin.ignore();
		fin.get(tmp->hourst, 100, ',');
		fin.ignore();
		fin.get(tmp->hourend, 100, ',');
		fin.ignore();
		fin.get(tmp->room, 100, ',');
		fin.ignore();
		fin >> tmp->active;
		fin.get();
		first = false;
		tmp->pNext = NULL;
	}
	fin.close();
	//delete tmp;
	//showcoursesinterm(C);
}
void showcoursesinterm(course* a) {
	//loadcourse("F:/Visual Studio/Student Management System/Course.csv");
	course* now = a;
	int y = 5;
	gotoxy(5, y);
	cout << "CourseName                         CourseID LectureAccount    Class    DayStart    DayEnd ";
	do {
		++y;
		gotoxy(5, y);
		cout << now->name;
		gotoxy(40, y);
		cout << now->ID;
		gotoxy(50, y);
		cout << now->lecaccount;
		gotoxy(66, y);
		cout << now->classs;
		gotoxy(75, y);
		cout << now->start;
		gotoxy(87, y);
		cout << now->end;
		now = now->pNext;
	} while (now != NULL);
	draw(20, y + 1, "Press enter to RETURN", 14);
	int n = 0;
	n = VK_KEY(n);
	if (n == 100) {
		//delete now;
		clear();
		createcourse();
	}
}
void findcourse(char* c,char* lop, course* a) {
	clear();
	course* tim = a;
	int y = 5;
	char p[100];
	while (tim != NULL) {
		if (strcmp(tim->ID, c) == 0) {
			/*
			if (strcmp(tim->classs, "18CTT1") == 0)
				shows
tudentincourse(tim, y, "F:/Visual Studio/Student Management System/Class 1.csv");
			if (strcmp(tim->classs, "18CTT2") == 0)
				showstudentincourse(tim, y, "F:/Visual Studio/Student Management System/Class 2.csv");
			if (strcmp(tim->classs, "18CTT3") == 0)
				showstudentincourse(tim, y, "F:/Visual Studio/Student Management System/Class 3.csv");
			if (strcmp(tim->classs, "18CTT4") == 0)
				showstudentincourse(tim, y, "F:/Visual Studio/Student Management System/Class 4.csv");
			if (strcmp(tim->classs, "18CTT5") == 0)
				showstudentincourse(tim, y, "F:/Visual Studio/Student Management System/Class 5.csv");*/
			strcpy_s(p, "C:/Users/Admin/Desktop/Project/GroupA/");
			strcat_s(p, lop);
			char a[2];
			a[0] = '_';
			a[1] = '\0';
			strcat_s(p, a);
			strcat_s(p, c);
			strcat_s(p, ".csv");
			showstudentincourse(tim, y, p);
			break;
		}
		tim = tim->pNext;
	}
	draw(30, y + 1, "Press ENTER to RETURN", 14);
	int n = 0;
	n = VK_KEY(n);
	if (n == 100) {
		clear();
		createcourse();
	}
}
void showstudentincourse(course* a, int& i, const char* path) {
	//course* show = a;
	//ifstream fin;
	//bool landau = true;
	//Class*now = new Class;
	//Class* cur = now;
	Class* now = nullptr;
	loadAttendenceCSV(now, path);
	/*int x;
	fin.open(path);
	fin.ignore(1000, '\n');
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
		if (landau == false)
			fin.ignore(100, '\n');
		fin.get(cur->name, 100, ',');
		fin.ignore();
		fin >> x;
		fin.ignore();
		fin.get(cur->ID, 100, ',');
		fin.ignore();
		fin.get(cur->lname, 100, ',');
		fin.ignore();
		fin.get(cur->fname, 100, ',');
		fin.ignore();
		fin.get(cur->gen, 100, ',');
		fin.ignore();
		fin.get(cur->dob, 100, '\n');
		cur->pNext = NULL;
		landau = false;
	}
	tmp->pNext = NULL;*/
	draw(5, i, "Class     No   Student ID   Last Name          First Name     DoB       ", 15);
	int j = 1;
	while (now != NULL) {
		gotoxy(5, ++i);
		cout << now->name;
		gotoxy(15, i);
		cout << j;
		gotoxy(20, i);
		cout << now->ID;
		gotoxy(33, i);
		cout << now->lname;
		gotoxy(52, i);
		cout << now->fname;
		gotoxy(67, i);
		cout << now->dob;
		++j;
		now = now->pNext;
	}
	++i;
	//fin.close();
}

void addnewcourse(course*& a, const char* path) {//tao trong course
	ofstream fout;
	course* tmp = a;
	int i = 1;
	while (tmp->pNext != NULL)
	{
		tmp = tmp->pNext;
		i++;
	}
	tmp->pNext = new course;
	tmp = tmp->pNext;
	tmp->no = i;
	fout.open(path, ios::app);
	draw(10, 10, "Course Name: ", 15);
	gotoxy(23, 10);
	cin.get(tmp->name, 100, '\n');
	cin.ignore();
	draw(10, 11, "Course ID: ", 15);
	gotoxy(21, 11);
	cin.get(tmp->ID, 100, '\n');
	cin.ignore();
	draw(10, 12, "Lecture's account: ", 15);
	gotoxy(29, 12);
	cin.get(tmp->lecaccount, 100, '\n');
	cin.ignore();
	draw(10, 13, "Class attends in course: ", 15);
	gotoxy(35, 13);
	cin.get(tmp->classs, 100, '\n');
	cin.ignore();
	draw(10, 14, "Start Day: ", 15);
	gotoxy(21, 14);
	cin.get(tmp->start, 100, '\n');
	cin.ignore();
	draw(10, 15, "End day: ", 15);
	gotoxy(19, 15);
	cin.get(tmp->end, 100, '\n');
	cin.ignore();
	draw(10, 16, "Day in week: ", 15);
	gotoxy(23, 16);
	cin.get(tmp->day, 100, '\n');
	cin.ignore();
	draw(10, 17, "Start hour: ", 15);
	gotoxy(22, 17);
	cin.get(tmp->hourst, 100, '\n');
	cin.ignore();
	draw(10, 18, "End hour: ", 15);
	gotoxy(20, 18);
	cin.get(tmp->hourend, 100, '\n');
	cin.ignore();
	draw(10, 19, "Room: ", 15);
	gotoxy(16, 19);
	cin.get(tmp->room, 100, '\n');
	cin.ignore();
	draw(10, 20, "Active: ", 15);
	gotoxy(14, 20);
	int n;
	cin >> n;
	cin.get();
	tmp->pNext = NULL;
	//fout << endl;
	fout << i << "," << tmp->ID << "," << tmp->name << "," << tmp->classs << "," << tmp->lecaccount << "," << tmp->start << "," << tmp->end << "," << tmp->day << "," << tmp->hourst << "," << tmp->hourend << "," << tmp->room <<","<<n <<endl;
	addlectureaccount(tmp);
	createnewclassincourse(tmp);
	fout.close();
}
void createnewclassincourse(course* a) {//tao file csv chua hs va score
	ofstream fout;
	course* now = a;
	student* tmp = nullptr;
	char c[100], d[100];
	strcpy_s(c, "C:/Users/Admin/Desktop/Project/GroupA/");
	strcpy_s(d, "C:/Users/Admin/Desktop/Project/GroupA/");
	char a3[2];
	a3[0] = '_';
	a3[1] = '\0';
	strcat_s(c, a->classs);
	strcat_s(d, a->classs);
	strcat_s(c, a3);
	strcat_s(d, a3);
	strcat_s(c, now->ID);
	strcat_s(d, now->ID);
	strcat_s(c, ".csv");
	strcat_s(d, ".txt");
	fout.open(c, ios::app);
	if (strcmp(now->classs, "19APCS1") == 0) {
		loadstudenttoMove(tmp, "C:/Users/Admin/Desktop/Project/GroupA/19APCS1.csv");
	}

	if (strcmp(now->classs, "19APCS2") == 0) {
		loadstudenttoMove(tmp, "C:/Users/Admin/Desktop/Project/GroupA/19APCS2.csv");
	}
	fout << "No,Class,Student ID,Last name,First name,DoB,Gender,Assignment,Midterm,Final,Total,W1,W2,W3,W4" << endl;
	int n = 1;
	while (tmp != NULL) { //checkagain arguments
		fout << n << "," << tmp->Cla << "," << tmp->ID << "," << tmp->lastname << "," << tmp->firstname  << "," << tmp->dob << "," << tmp->sex << ",";
		fout << '0' << "," << '0' << "," << '0' << "," << '0' << "," << '0' << "," << '0' << "," << '0' << "," << '0' << endl;
		tmp = tmp->pNext;
		n++;
	}
	fout.close();
	//delete now;
	CSVloadtoTXT(c, d);
	delete tmp;
}
void addlectureaccount(course* t) { // them vo account cua lecture
	lecture* tam = nullptr;
	course* them = t;
	loadlecture(tam, "C:/Users/Admin/Desktop/Project/GroupA/Lecture.csv");
	lecture* add = tam;
	while (add->pNext != NULL)
		add = add->pNext;
	ofstream fout;
	fout.open("C:/Users/Admin/Desktop/Project/GroupA/Lecture.csv", ios::app);
	//fout << endl;
	fout << them->lecaccount << ",";
	fout << them->ID << ",";
	fout << them->name;
	fout << endl;
	fout.close();
}


void xoakhoicourse(char* co, char* stu, Class*& save) {
	char diachi[100];
	strcpy_s(diachi, "C:/Users/Admin/Desktop/Project/GroupA/");
	strcat_s(diachi, co);
	strcat_s(diachi, ".csv");
	Class* temp = nullptr;
	deldestudent(temp, diachi);// xoa trong course
	Class* xoa = temp;
	while (temp->pNext != NULL) {
		if (strcmp(temp->ID, stu) == 0)
		{
			temp = temp->pNext;
			xoa = temp;
			break;
		}
		if (strcmp(temp->pNext->ID, stu) == 0) {
			Class* temp1 = temp->pNext;
			temp->pNext = temp->pNext->pNext;
			delete temp1;
			break;
		}
		temp = temp->pNext;
	}
	temp = xoa;
	save = xoa;
	ofstream fout;
	fout.open(diachi);
	Class* show = temp;
	fout << "No,Student ID,Last name,First name,DoB,Class" << endl;
	int n = 1;
	while (show != NULL) {
		fout << n << ",";
		fout << show->ID << "," << show->lname << "," << show->fname << ","  << show->dob << ",";
		fout << show->name << endl;
		show = show->pNext;
		n++;
	}
	fout.close();
}

void xoakhoicourse2(char* co, char* stu, Class*& save) {
	char diachi[100];
	strcpy_s(diachi, "C:/Users/Admin/Desktop/Project/GroupA/");
	strcat_s(diachi, co);
	strcat_s(diachi, ".csv");
	Class* temp = nullptr;
	loadAttendenceCSV(temp, diachi);// xoa trong course
	Class* xoa = temp;
	while (temp->pNext != NULL) {
		if (strcmp(temp->ID, stu) == 0)
		{
			temp = temp->pNext;
			xoa = temp;
			break;
		}
		if (strcmp(temp->pNext->ID, stu) == 0) {
			Class* temp1 = temp->pNext;
			temp->pNext = temp->pNext->pNext;
			delete temp1;
			break;
		}
		temp = temp->pNext;
	}
	temp = xoa;
	save = xoa;
	saveAttendenceCSV(temp,diachi);
}

void deldestudent(Class*& S, const char* path)
{
	ifstream fin;
	bool first = true;
	Class* now = new Class;
	fin.open(path);
	string b;
	int n;
	getline(fin, b);
	while (fin >> n) {
		if (S == nullptr) {
			S = new Class;
			now = S;
		}
		else {
			now->pNext = new Class;
			now = now->pNext;
		}
		fin.get();		
		fin.get(now->ID, 100, ',');
		fin.ignore();
		fin.get(now->lname, 100, ',');
		fin.ignore();
		fin.get(now->fname, 100, ',');
		fin.ignore();
		fin.get(now->dob, 100, ',');
		fin.ignore();
		fin.get(now->name, 100, '\n');
		fin.ignore();
		
		now->pNext = nullptr;
	}
	fin.close();

}

void yearandterm() {
	draw(20, 10, "Academic year: ", 11);
	draw(20, 12, "Semester: ", 11);
	draw(35, 10, "2019-2020", 15);
	draw(30, 12, "Summer", 15);
	draw(25, 14, "Press ENTER to RETURN", 12);
	// show all lecture
	int n = 0;
	n = VK_KEY(n);
	if (n == 100) {
		Sleep(900);
		clear();
		createcourse();
	}
}

void findcoursetoaddstudent(const char* c) {
	course* a = nullptr;
	loadcourse("C:/Users/Admin/Desktop/Project/GroupA/Schedule.csv", a);
	course* tmp = a;
	char cl_name[100];
	cout << "Enter class: (19APCS1,19APCS2):";
	cin.getline(cl_name,100);
	while (tmp != NULL) {
		if (strcmp(tmp->ID, c) == 0) {
			char diachi[100];
			strcpy_s(diachi, "C:/Users/Admin/Desktop/Project/GroupA/");
			strcat_s(diachi, cl_name);
			char a1[2];
			a1[0] = '_';
			a1[1] = '\0';
			strcat_s(diachi, a1);
			strcat_s(diachi, tmp->ID);
			strcat_s(diachi, ".csv");
			addstudentincourse(diachi);
			break;
		}
		tmp = tmp->pNext;
	}
}
void addstudentincourse(const char* path) {
	Class* now = nullptr;
	loadAttendenceCSV(now, path);
	Class* tmp = now;
	string abc;
	if (tmp)
		abc = tmp->name;
	int n = 1;
	while (tmp->pNext != NULL) {
		tmp = tmp->pNext;
		n++;
	}
	Class* k = tmp;
	tmp->pNext = new Class;
	tmp = tmp->pNext;
	strcpy_s(tmp->name,abc.c_str());
	cout << "Student's ID:";
	cin.get(tmp->ID, 100, '\n');
	cin.ignore();
	cout << "Student's Last Name:";
	cin.get(tmp->lname, 100, '\n');
	cin.ignore();
	cout << "Student's First Name:";
	cin.get(tmp->fname, 100, '\n');
	cin.ignore();
	cout << "Gender of student:";
	cin.get(tmp->gen, 100, '\n');
	cin.ignore();
	cout << "Day of Birth:";
	cin.get(tmp->dob, 100, '\n');
	cin.ignore();
	tmp->pNext = NULL;
	Class* save = now;
	bool first = true;
	while (save != NULL) {
		ofstream fout;
		if (first)
		{
			fout.open(path);
			fout << "Class,Student ID,Last name,First name,DoB,Gender,Assignment,Midterm,Final,Total,Week 1,Week2,Week 3,Week 4" << endl;
			first = false;
		}
		else fout.open(path, ios::app);
		while (save != NULL) {
			fout << n << ",";
			fout << save->name << "," << save->ID << "," << save->lname << "," << save->fname << "," << save->dob << "," << save->gen  << ",";
			fout << '0' << "," << '0' << "," << '0' << "," << '0' << ",";
			fout << '0' << ",";
			fout << '0' << ",";
			fout << '0' << ",";
			fout << '0' << endl;
			save = save->pNext;
		}
	}
	cout << "Add successfully" << endl;
	cout << "PRESS ENTER TO RETURN" << endl;
}


void atteStaff() {
	clear();
	char a3[100];
	draw(30, 4, "What course you want to show scoreboard? (Ex:CS161,...)", 11); //19APCS1 //CS161
	gotoxy(86, 4);
	char clas[100];
	cin.get(a3, 100, '\n');
	cin.get();
	draw(30, 5, "What class you want to show scoreboard? (Ex:19APCS1...)", 11);
	cin.get(clas, 100, '\n');
	cin.ignore();
	char diachi[100];
	strcpy_s(diachi, "C:/Users/Admin/Desktop/Project/GroupA/");
	strcat_s(diachi, clas);
	char a1[2];
	a1[0] = '_';
	a1[1] = '\0';
	strcat_s(diachi, a1);
	strcat_s(diachi, a3);
	strcat_s(diachi, ".csv");
	Class* a = nullptr;
	loadAttendenceCSV(a, diachi);
	draw(3, 7, "Class  Student ID   Last name        First name  Course ID   W1  W2  W3  W4", 14);
	Class* tmp = a;
	int i = 7;
	while (tmp != NULL) {
		gotoxy(3, ++i);
		cout << tmp->name;
		gotoxy(12, i);
		cout << tmp->ID;
		gotoxy(23, i);
		cout << tmp->lname;
		gotoxy(40, i);
		cout << tmp->fname;
		gotoxy(52, i);
		cout << a3;
		gotoxy(64, i);
		cout << tmp->week1->check;
		gotoxy(67, i);
		cout << tmp->week2->check;
		gotoxy(72, i);
		cout << tmp->week3->check;
		gotoxy(76, i);
		cout << tmp->week4->check;
		tmp = tmp->pNext;
	}
	delete tmp;
	++i;
	draw(65, 10 + i + 3, "-1: Absent!", 7);
	draw(65, 10 + i + 4, "1: Present!", 7);
	draw(65, 10 + i + 5, ".: Haven't check-in!", 7);
	draw(65, 10 + i + 10, " ", 7);
	draw(50, 10 + i + 11, "PRESS ENTER TO RETURN", 14);
}