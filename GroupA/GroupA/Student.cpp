#include"FunctionUsed.h"
#include"Student.h"
void menust() {
	clear();
	draw(56, 10, "1.Schedule", 81);
	draw(56, 11, "2.Attendence List", 11);
	draw(56, 12, "3.Scoreboard", 11);
	draw(56, 13, "4.Change Password", 11);
	draw(56, 14, "5.Log out", 11);
	choosenst();

}
void choosenst()
{
	ShowConsoleCursor(false);
	safe();
	Sleep(700);
	int n = 1;
	while (1)
	{
		if (n == 1)
		{
			draw(56, 10, "1.Schedule", 81);
			draw(56, 11, "2.Attendence List", 11);
			draw(56, 12, "3.Scoreboard", 11);
			draw(56, 13, "4.Change Password", 11);
			draw(56, 14, "5.Log out", 11);
		}
		if (n == 2)
		{
			draw(56, 10, "1.Schedule", 11);
			draw(56, 11, "2.Attendence List", 81);
			draw(56, 12, "3.Scoreboard", 11);
			draw(56, 13, "4.Change Password", 11);
			draw(56, 14, "5.Log out", 11);
		}
		if (n == 3)
		{
			draw(56, 10, "1.Schedule", 11);
			draw(56, 11, "2.Attendence List", 11);
			draw(56, 12, "3.Scoreboard", 81);
			draw(56, 13, "4.Change Password", 11);
			draw(56, 14, "5.Log out", 11);
		}
		if (n == 4)
		{
			draw(56, 10, "1.Schedule", 11);
			draw(56, 11, "2.Attendence List", 11);
			draw(56, 12, "3.Scoreboard", 11);
			draw(56, 13, "4.Change Password", 81);
			draw(56, 14, "5.Log out", 11);
		}
		if (n == 5) {
			draw(56, 10, "1.Schedule", 11);
			draw(56, 11, "2.Attendence List", 11);
			draw(56, 12, "3.Scoreboard", 11);
			draw(56, 13, "4.Change Password", 11);
			draw(56, 14, "5.Log out", 81);
		}
		n = VK_KEY(n);
		if (n == 101) {
			draw(56, 10, "1.Schedule", 198);
			Sleep(100);
			draw(56, 10, "1.Schedule", 118);
			Sleep(100);
			draw(56, 10, "1.Schedule", 198);
			Sleep(100);
			draw(56, 10, "1.Schedule", 118);
			clear();
			showschedule();
		}
		if (n == 102) {
			draw(56, 11, "2.Attendence List", 198);
			Sleep(100);
			draw(56, 11, "2.Attendence List", 118);
			Sleep(100);
			draw(56, 11, "2.Attendence List", 198);
			Sleep(100);
			draw(56, 11, "2.Attendence List", 118);
			clear();
			menuAtt();
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
			loadbangdiemchohs();
		}
		if (n == 104) {
			draw(56, 13, "4.Change Password", 198);
			Sleep(100);
			draw(56, 13, "4.Change Password", 118);
			Sleep(100);
			draw(56, 13, "4.Change Password", 198);
			Sleep(100);
			draw(56, 13, "4.Change Password", 118);
			clear();
			changepass();
		}
		if (n == 105) {
			draw(56, 14, "4.Log out", 198);
			Sleep(100);
			draw(56, 14, "4.Log out", 118);
			Sleep(100);
			draw(56, 14, "4.Log out", 198);
			Sleep(100);
			draw(56, 14, "4.Log out", 118);
			clear();
			menu();
		}
	}
}
void loadbangdiemchohs() {
	course* cur = nullptr;
	loadcourse("C:/Users/Admin/Desktop/Project/GroupA/Schedule.csv", cur);
	course* tmp = cur;
	//char id[100];
	//char tenlop[100];
	int i = 10;
	bool first = true;
	ifstream fin1("menu.txt");
	if (!fin1.is_open())
	{
		cout << "Can not find file" << endl;
		return;
	}
	string id;
	getline(fin1, id);
	fin1.close();
	//doctuhamluubienhs(id, tenlop, "C:/Users/Admin/Desktop/Project/GroupA/Student.csv");
	//xoahamluubienhs("F:/Visual Studio/Student Management System/tenhs.csv");
	while (tmp != NULL) {
			char diachi[100];
			strcpy_s(diachi, "C:/Users/Admin/Desktop/Project/GroupA/");
			strcat_s(diachi, tmp->classs);
			char a[2];
			a[0] = '_';
			a[1] = '\0';
			strcat_s(diachi, a);
			strcat_s(diachi, tmp->ID);
			strcat_s(diachi, ".csv");
			Class* c = nullptr;
			loadAttendenceCSV(c, diachi);
			Class* xet = c;
			//checkagain PROBLEM
			while (xet != NULL) {
				if (strcmp(xet->ID, id.c_str()) == 0) {
					if (first == true) {
						draw(20, 10, "Class  Last name         First name   Course                              Student ID    Assignment   Midterm   Final   Total", 14);
						first = false;
					}
					gotoxy(20, ++i);
					cout << xet->name;
					gotoxy(27, i);
					cout << xet->lname;
					gotoxy(45, i);
					cout << xet->fname;
					gotoxy(58, i);
					cout << tmp->name;
					gotoxy(94, i);
					cout << xet->ID;
					gotoxy(108, i);
					cout << xet->ass;
					gotoxy(121, i);
					cout << xet->mid;
					gotoxy(131, i);
					cout << xet->final;
					gotoxy(139, i);
					cout << xet->total;
					//++i;
					break;
				}
				xet = xet->pNext;
			}
		tmp = tmp->pNext;
	}
	//cout << endl;
	draw(50, 40, "Press ENTER to RETURN", 14);
	int n = 0;
	n = VK_KEY(n);
	if (n == 100) {
		Sleep(400);
		clear();
		menust();
	}
	delete cur;
	delete tmp;
}

void showschedule() {
	int i = 10;
	//bool first = true;
	ifstream fin1("menu.txt");
	if (!fin1.is_open())
	{
		cout << "Can not find file" << endl;
		return;
	}
	string id;
	getline(fin1, id);
	fin1.close();
	//xoahamluubienhs("F:/Visual Studio/Student Management System/tenhs.csv");
	course* schedule = nullptr;
	loadcourse("C:/Users/Admin/Desktop/Project/GroupA/Schedule.csv", schedule);
	course* tmp = schedule;
	bool first = true;
	int thu = 11;
	int w = 11;
	int t = 11;
	int m = 11;
	int f = 11;
	int s = 11;
	//checkagain OOPSSSSSSSSSSSSSSSSSS
	while (tmp != NULL) {
			if (first == true) {
				gotoxy(20, 8);
				draw(20, 10, "Monday     Tuesday     Wednesday    Thursday    Friday    Saturday", 11);
				first = false;
			}
			Class* p = NULL;
			char diachi[100];
			strcpy_s(diachi, "C:/Users/Admin/Desktop/Project/GroupA/");
			strcat_s(diachi, tmp->classs);
			char a[2];
			a[0] = '_';
			a[1] = '\0';
			strcat_s(diachi, a);
			strcat_s(diachi, tmp->ID);
			strcat_s(diachi, ".csv");
			loadAttendenceCSV(p, diachi);
			while (p)
			{
				if (strcmp(p->ID,id.c_str()) == 0)
				{
					if (strcmp(tmp->day, "Mon") == 0) {
						gotoxy(20, m);
						cout << tmp->ID;
						++m;
						gotoxy(20, m);
						cout << "(" << tmp->hourst << ")";
						++m;
					}
					if (strcmp(tmp->day, "Tue") == 0) {
						//int i = 11;
						gotoxy(31, t);
						cout << tmp->ID;
						++t;
						gotoxy(31, t);
						cout << "(" << tmp->hourst << ")";
						++t;
					}
					if (strcmp(tmp->day, "Wed") == 0) {
						//int  = 11;
						gotoxy(43, w);
						cout << tmp->ID;
						++w;
						gotoxy(43, w);
						cout << "(" << tmp->hourst << ")";
						++w;
					}


					if (strcmp(tmp->day, "Thu") == 0) {
						//int i = 11;
						gotoxy(56, thu);
						cout << tmp->ID;
						++thu;
						gotoxy(56, thu);
						cout << "(" << tmp->hourst << ")";
						++thu;
					}
					if (strcmp(tmp->day, "Fri") == 0) {
						//int i = 11;
						gotoxy(68, f);
						cout << tmp->ID;
						++f;
						gotoxy(68, f);
						cout << "(" << tmp->hourst << ")";
						++f;
					}
					if (strcmp(tmp->day, "Sat") == 0) {
						//int i = 11;
						gotoxy(78, s);
						cout << tmp->ID;
						++s;
						gotoxy(78, s);
						cout << "(" << tmp->hourst << ")";
						++s;
					}
				}
				p = p->pNext;
			}
		tmp = tmp->pNext;
	}
	cout << endl;
	draw(25, s + m, "Press ENTER to RETURN", 12);
	int n = 0;
	n = VK_KEY(n);
	if (n == 100) {
		Sleep(500);
		clear();
		menust();
	}
}

bool checkpass(char a[100], char b[100], student*& c) {// kt co phai student log in kh
	while (c != NULL) {
		if (strcmp(c->ID, a) == 0 && strcmp(c->dob, b) == 0)
			return true;
		else c = c->pNext;
	}
	return false;
}
void changepass() { //checkagain
	char id[100], pass[100], lop[100];
	ifstream fin1("menu.txt");
	if (!fin1.is_open())
	{
		cout << "Can not find file" << endl;
		return;
	}
	fin1.getline(id,100);
	fin1.close();
	student* S = nullptr;
	loadstudent(S, "C:/Users/Admin/Desktop/Project/GroupA/Student.csv");
	while (1) {
		cout << "Enter your password: ";
		cin.get(pass, 100, '\n');
		cin.ignore();
		if (checkstudent(id, pass, S)) {
			//xoahamluubienhs("F:/Visual Studio/Student Management System/tenhs.csv");
			break;
		}
		else cout << "Enter password again please!!!" << endl;
	}

	student* now = S;
	while (now) {
		if (strcmp(now->ID,id) == 0) {
			cout << "New password: ";
			char newpass[100];
			cin.get(newpass, 100, '\n');
			cin.ignore();
			cout << "Confirm password: ";
			char confirm[100];
			cin.get(confirm, 100, '\n');
			cin.ignore();
			if (strcmp(confirm, newpass) == 0)
			{
				strcpy_s(now->password, newpass);
				break;
			}
			else
			{
				cout << "Wrong confirm password!" << endl;
			}
			
		}
	}
	ofstream fout;
	fout.open("C:/Users/Admin/Desktop/Project/GroupA/Student.csv");
	int i = 0;
	student* py = S;
	while (py)
	{
		i++;
		py = py->pNext;
	}
	fout << i << endl;
	while (S != NULL) { //checkagain Argumentsssssssssssssssssssssssssss
		fout << S->ID << endl;
		fout << S->password << endl;
		fout << S->lastname << endl;
		fout << S->firstname << endl;
		fout << S->dob << endl;
		fout << S->Cla << endl;
		fout << S->sex << endl;
		S = S->pNext;
	}
	//xoahamluubienhs("F:/Visual Studio/Student Management System/tenhs.csv");
	draw(30, 20, "Change password successfully", 14);
	draw(30, 20, "Press ENTER to RETURN", 12);
	int n = 0;
	n = VK_KEY(n);
	if (n == 100) {
		Sleep(500);
		clear();
		menust();
	}
}

void ViewattStu() { //tenhs-> Student
	
	course* c = nullptr;
	loadcourse("C:/Users/Admin/Desktop/Project/GroupA/Schedule.csv", c);
	course* u = c;
	ifstream fin1("menu.txt");
	if (!fin1.is_open())
	{
		cout << "Can not find file" << endl;
		return;
	}
	string id;
	getline(fin1, id);
	fin1.close();
	draw(20, 10, "Class    Last name            Fisrt name      Course     Week 1   Week 2   Week3   Week4", 11);
	int x = 10;
	while (u != NULL) {
			char diachi[100];
			strcpy_s(diachi, "C:/Users/Admin/Desktop/Project/GroupA/");
			strcat_s(diachi, u->classs);
			char a[2];
			a[0] = '_';
			a[1] = '\0';
			strcat_s(diachi, a);
			strcat_s(diachi, u->ID);
			strcat_s(diachi, ".csv");
			Class* y = nullptr;
			loadAttendenceCSV(y, diachi);
			while (y != NULL) {
				if (strcmp(y->ID, id.c_str()) == 0) {
					draw(20, ++x, y->name, 15);
					draw(29, x, y->lname, 15);
					draw(50, x, y->fname, 15);
					draw(66, x, u->ID, 15);
					if (y->week1->check == 0)
						draw(80, x, ".", 15);
					else if (y->week1->check == 1)
						draw(80, x, "P", 15);
					else if (y->week1->check == -1)
						draw(80, x, "A", 15);
					if (y->week2->check == 0)
						draw(89, x, ".", 15);
					else if (y->week2->check == 1)
						draw(89, x, "P", 15);
					else if (y->week2->check == -1)
						draw(89, x, "A", 15);
					if (y->week3->check == 0)
						draw(98, x, ".", 15);
					else if (y->week3->check == 1)
						draw(98, x, "P", 15);
					else if (y->week3->check == -1)
						draw(98, x, "A", 15);
					if (y->week4->check == 0)
						draw(106, x, ".", 15);
					else if (y->week4->check == 1)
						draw(106, x, "P", 15);
					else if (y->week4->check == -1)
						draw(106, x, "A", 15);
					//draw(105, x, y->week4->check, 15);
					cout << endl;
					break;
				}
				y = y->pNext;
		}
		u = u->pNext;
	}
}
void checkinStu() { //tenhs -> Student
	draw(50, 8, "View your attendance list first", 14);
	ViewattStu();
	ifstream fin1("menu.txt");
	if (!fin1.is_open())
	{
		cout << "Can not find file" << endl;
		return;
	}
	string id;
	getline(fin1, id);
	fin1.close();


	while (1) {
		string editcourse;
		cout << endl;
		cout << endl;
		cout << "What course you want to check-in?(Ex:19APCS1_CS161,...) ";
		getline(cin, editcourse);

		Class* pHead = nullptr;
		char diachi[100];
		strcpy_s(diachi, "C:/Users/Admin/Desktop/Project/GroupA/");
		strcat_s(diachi, editcourse.c_str());
		strcat_s(diachi, ".csv");
		loadAttendenceCSV(pHead, diachi);
		if (pHead == nullptr)
		{
			cout << "Can't load!" << endl;
			return;
		}
		Class* cur = pHead;
		while (cur != NULL) {
			if (strcmp(cur->ID, id.c_str()) == 0) {
				while (1)
				{
					int n;
					cout << "Which week of 4 weeks do you want to edit (Example: 1, 2, 3, 4): ";
					cin >> n;
					cin.get();
					if (n == 1)
					{
						int input;
						cout << "Please edit the day of week 1: " << endl;
						cout << "1. Present			2. Absent" << endl;
						cout << "Please choose state: ";
						cin >> input;
						if (input == 1)
							cur->week1->check = 1;
						else
							cur->week1->check = -1;
					}
					else if (n == 2)
					{
						int input;
						cout << "Please edit the day of week 2: " << endl;
						cout << "1. Present			2. Absent" << endl;
						cout << "Please choose state: ";
						cin >> input;
						if (input == 1)
							cur->week2->check = 1;
						else
							cur->week2->check = -1;
					}
					else if (n == 3)
					{
						int input;
						cout << "Please edit the day of week 3: " << endl;
						cout << "1. Present			2. Absent" << endl;
						cout << "Please choose state: ";
						cin >> input;
						if (input == 1)
							cur->week3->check = 1;
						else
							cur->week3->check = -1;
					}
					else if (n == 4)
					{
						int input;
						cout << "Please edit the day of week 4: " << endl;
						cout << "1. Present			2. Absent" << endl;
						cout << "Please choose state: ";
						cin >> input;
						if (input == 1)
							cur->week4->check = 1;
						else
							cur->week4->check = -1;
					}
					cout << "Do you want to edit other weeks? " << endl;
					cout << "1.Yes					2.No" << endl;
					int out;
					cout << "Please choose option: ";
					cin >> out;
					cin.get();
					if (out == 2)
						break;
				}
				break;
			}
			cur = cur->pNext;
		}
		cout << "Do you want to check in another cousre: " << endl;
		cout << "1.Yes						2.No" << endl;
		int quit;
		cout << "Please choose option: ";
		cin >> quit;
		cin.ignore();
		if (quit == 1) {
			saveStuatt(diachi, pHead);
		}
		if (quit == 2) {
			saveStuatt(diachi, pHead);
			break;
		}

	}
	clear();
	draw(50, 8, "View attendence list after editing", 14);
	ViewattStu();
	cout << "PRESS ENTER TO RETURN..." << endl;
	int n = 0;
	n = VK_KEY(n);
	if (n == 100) {
		clear();
		menust();
	}
}
void saveStuatt(const char* path, Class* pHead) {
	ofstream fout;
	fout.open(path);
	if (!fout.is_open())
		return; //checkagain Argumentsssssssssssssss
	fout << "No,Class,Student ID,Last name,First name,DoB,active,Assignment,Midterm,Final,Total,W1,W2,W3,W4" << endl;
	Class* cur = pHead;
	int no = 1;
	while (cur != nullptr)
	{
		fout << no << ",";
		no++;
		fout << cur->name << "," << cur->ID << "," << cur->lname << "," << cur->fname  << "," << cur->dob << "," << cur->gen << ",";
		fout << cur->ass << "," << cur->mid << "," << cur->final << "," << cur->total << ",";
		fout << cur->week1->check << ",";
		fout << cur->week2->check << ",";
		fout << cur->week3->check << ",";
		fout << cur->week4->check << endl;
		cur = cur->pNext;
	}
	fout.close();
}

void menuAtt() {
	clear();
	draw(40, 15, "1.View attendance list", 11);
	draw(40, 16, "2.Check-in", 11);
	draw(40, 17, "RETURN", 11);
	choosemnAtt();
}
void choosemnAtt() {
	ShowConsoleCursor(false);
	safe();
	Sleep(700);
	int n = 1;
	while (1)
	{
		if (n == 1) {
			draw(40, 15, "1.View attendance list", 81);
			draw(40, 16, "2.Check-in", 11);
			draw(40, 17, "RETURN", 11);
		}
		if (n == 2) {
			draw(40, 15, "1.View attendance list", 11);
			draw(40, 16, "2.Check-in", 81);
			draw(40, 17, "RETURN", 11);
		}
		if (n == 3) {
			draw(40, 15, "1.View attendance list", 11);
			draw(40, 16, "2.Check-in", 11);
			draw(40, 17, "RETURN", 81);
		}
		n = VK_KEY(n);
		if (n == 101) {
			draw(40, 15, "1.View attendance list", 198);
			Sleep(100);
			draw(40, 15, "1.View attendance list", 118);
			Sleep(100);
			clear();
			ViewattStu();
			cout << endl;
			draw(50, 40, "PRESS ENTER TO RETURN", 14);
			int n = 0;
			n = VK_KEY(n);
			if (n == 100) {
				Sleep(300);
				clear();
				menuAtt();
			}
		}
		if (n == 102) {
			draw(40, 16, "2.Check-in", 198);
			Sleep(100);
			draw(40, 16, "2.Check-in", 118);
			Sleep(100);
			clear();
			checkinStu();
		}
		if (n == 103) {
			Sleep(400);
			clear();
			menust();
		}
	}
}


