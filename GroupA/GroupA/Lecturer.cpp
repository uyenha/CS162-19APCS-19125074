#include"FunctionUsed.h"
#include"Lecture.h"
#include <vector>
void lecturemenu() {
	draw(50, 5, "__________                _____                                 ", 15);
	draw(50, 6, "\\______   \\_______  _____/ ____\\____   ______ _________________ ", 15);
	draw(50, 7, " |     ___/\\_  __ \\/  _ \\   __\\/ __ \\ /  ___//  ___/  _ \\_  __ \\", 15);
	draw(50, 8, " |    |     |  | \\(  <_> )  | \\  ___/ \\___ \\ \\___ (  <_> )  | \\/", 15);
	draw(50, 9, " |____|     |__|   \\____/|__|  \\___  >____  >____  >____/|__|   ", 15);
	draw(60, 11, "1.Scoreboard", 11);
	draw(60, 12, "2.Attendence List", 11);
	draw(60, 13, "3.Log out", 11);
	choosenlec();
}
void choosenlec() {
	ShowConsoleCursor(false);
	safe();
	Sleep(700);
	int n = 1;
	while (1)
	{
		if (n == 1)
		{
			draw(60, 11, "1.Scoreboard", 81);
			draw(60, 12, "2.Attendence List", 11);
			draw(60, 13, "3.Log out", 11);
		}
		if (n == 2) {
			draw(60, 11, "1.Scoreboard", 11);
			draw(60, 12, "2.Attendence List", 81);
			draw(60, 13, "3.Log out", 11);
		}
		if (n == 3) {
			draw(60, 11, "1.Scoreboard", 11);
			draw(60, 12, "2.Attendence List", 11);
			draw(60, 13, "3.Log out", 81);
		}
		n = VK_KEY(n);
		if (n == 101) {
			draw(60, 11, "1.Scoreboard", 198);
			Sleep(100);
			draw(60, 11, "1.Scoreboard", 118);
			Sleep(100);
			draw(60, 11, "1.Scoreboard", 198);
			Sleep(100);
			draw(60, 11, "1.Scoreboard", 118);
			clear();
			scoreoptionlec();
		}
		if (n == 102) {
			draw(60, 12, "2.Attendence List", 198);
			Sleep(100);
			draw(60, 12, "2.Attendence List", 118);
			Sleep(100);
			draw(60, 12, "2.Attendence List", 198);
			Sleep(100);
			draw(60, 12, "2.Attendence List", 118);
			clear();
			chooseOptionLec();
		}
		if (n == 103) {
			draw(60, 13, "3.Log out", 198);
			Sleep(100);
			draw(60, 13, "3.Log out", 118);
			Sleep(100);
			draw(60, 13, "3.Log out", 198);
			Sleep(100);
			draw(60, 13, "3.Log out", 118);
			clear();
			menu();
		}
	}
}

void scoreoptionlec() {
	clear();
	draw(60, 11, "1.View your scoreboard", 11);
	draw(60, 12, "2.Edit scoreboard", 11);
	draw(60, 13, "RETURN", 11);
	choosescoreoption();
}
void choosescoreoption() {
	ShowConsoleCursor(false);
	safe();
	Sleep(700);
	int n = 1;
	while (1)
	{
		if (n == 1)
		{
			draw(60, 11, "1.View your scoreboard", 81);
			draw(60, 12, "2.Edit scoreboard", 11);
			draw(60, 13, "RETURN", 11);
		}
		if (n == 2) {
			draw(60, 11, "1.View your scoreboard", 11);
			draw(60, 12, "2.Edit scoreboard", 81);
			draw(60, 13, "RETURN", 11);
		}
		if (n == 3) {
			draw(60, 11, "1.View your scoreboard", 11);
			draw(60, 12, "2.Edit scoreboard", 11);
			draw(60, 13, "RETURN", 81);
		}
		n = VK_KEY(n);
		if (n == 101) {
			draw(60, 11, "1.View your scoreboard", 198);
			Sleep(100);
			draw(60, 11, "1.View your scoreboard", 118);
			Sleep(100);
			draw(60, 11, "1.View your scoreboard", 198);
			Sleep(100);
			draw(60, 11, "1.View your scoreboard", 118);
			clear();
			showbangdiemcualec();
			cout << endl;
			cout << endl;
			cout << "\t\tPress ENTER to RETURN";
			int n = 0; n = VK_KEY(n);
			if (n == 100) {
				Sleep(500);
				clear();
				scoreoptionlec();
			}
		}
		if (n == 102) {
			draw(60, 12, "2.Edit scoreboard", 198);
			Sleep(100);
			draw(60, 12, "2.Edit scoreboard", 118);
			Sleep(100);
			draw(60, 12, "2.Edit scoreboard", 198);
			Sleep(100);
			draw(60, 12, "2.Edit scoreboard", 118);
			clear();
			suadiemchohs();
		}
		if (n == 103) {
			Sleep(500);
			clear();
			lecturemenu();
		}
	}
}
void showbangdiemcualec() { //checkagain
	course* cur = nullptr;
	loadcourse("C:/Users/Admin/Desktop/Project/GroupA/19APCS1_Schedule.csv", cur); // /course.csv
	char tenLec[100];
	bool first = true;
	int i = 5;
	ifstream fin;
	fin.open("C:/Users/Admin/Desktop/Project/GroupA/menu.txt");
	fin.get(tenLec, 100);
	fin.close();
	//xoahamluubienhs("F:/Visual Studio/Student Management System/tenlec.csv");
	course* temp = cur;
	vector<course> vt;
	int i2 = 0;
	while (cur != NULL)
	{
		if (strcmp(tenLec, cur->lecaccount) == 0)
		{
			cout << i2 << ".  class: " << cur->classs << " course:" << cur->ID << endl;
			vt.push_back(*cur);
			i2++;
		}
		cur = cur->pNext;
	}
	if (i2 == 0) {
		cout << "No class available for this teacher" << endl;
		return;
	}
	int choose;
	do
	{
		cout << "choose:(integer)" << endl;
		cin >> choose;
		cin.get();
	} while (choose < 0 || choose >= i2);

	cur = &vt[choose];
	char diachi[100];
	strcpy_s(diachi, "C:/Users/Admin/Desktop/Project/GroupA/");
	strcat_s(diachi, cur->classs);
	char c[2];
	c[0] = '_';
	c[1] = '\0';
	strcat_s(diachi, c);
	strcat_s(diachi, cur->ID);
	strcat_s(diachi, ".csv");
	ofstream fout1("Save.txt");
	fout1 << diachi << endl;
	fout1.close();
	Class* a = nullptr;
	loadAttendenceCSV(a, diachi);
	Class* tmp = a;
	while (tmp != NULL) {
		if (first == true)
			draw(3, 5, "Class  Student ID   Last name        First name  Course ID   Assignment  Midterm  Final  Total", 14);
		++i;
		gotoxy(2, i);
		cout << tmp->name;
		gotoxy(10, i);
		cout << tmp->ID;
		gotoxy(23, i);
		cout << tmp->lname;
		gotoxy(40, i);
		cout << tmp->fname;
		gotoxy(52, i);
		cout << cur->ID;
		gotoxy(64, i);
		cout << tmp->ass;
		gotoxy(76, i);
		cout << tmp->mid;
		gotoxy(85, i);
		cout << tmp->final;
		gotoxy(92, i);
		cout << tmp->total;
		first = false;
		tmp = tmp->pNext;
	}
	gotoxy(0, i + 1);
}
void suadiemchohs() {
	//clear();
	Class* a = nullptr;
	showbangdiemcualec();
	char diachi[100];
	char studentID[100];
	char lop[100];
	char courseID[100];
	cout << "Enter student ID to change score: ";
	cin.getline(studentID,100);
	ifstream fin1("Save.txt");
	fin1.getline(diachi, 100);
	fin1.close();
	loadAttendenceCSV(a, diachi);
	Class* tmp = a;
	while (tmp != NULL) {
		if (strcmp(tmp->ID, studentID) == 0) {
			clear();
			draw(20, 14, "Assignment score: ", 15);
			gotoxy(38, 14);
			cin >> tmp->ass;
			draw(20, 15, "Midterm score: ", 15);
			gotoxy(35, 15);
			cin >> tmp->mid;
			draw(20, 16, "Final score: ", 15);
			gotoxy(33, 16);
			cin >> tmp->final;
			//cout << "Total score: ";
			float sum = (tmp->ass + tmp->mid + tmp->final) / 3;
			tmp->total = sum;
			//cin >> tmp->total;
			break;
		}
		tmp = tmp->pNext;
	}
	Class* ghi = a;
	ofstream fout;
	fout.open(diachi);
	fout << "Class,Student ID,Last name,First name,Gender,DoB,Assignment,Midterm,Final,Total,W1,W2,W3,W4" << endl;
	while (ghi != NULL)
	{
		fout << ghi->no << ",";
		fout << ghi->name << ",";
		fout << ghi->ID << ",";
		fout << ghi->lname << ",";
		fout << ghi->fname << ",";
		fout << ghi->gen << ",";
		fout << ghi->dob << ",";
		fout << ghi->ass << ",";
		fout << ghi->mid << ",";
		fout << ghi->final << ",";
		fout << ghi->total << ",";
		fout << ghi->week1->check << ",";
		fout << ghi->week2->check << ",";
		fout << ghi->week3->check << ",";
		fout << ghi->week4->check << endl;
		ghi = ghi->pNext;
	}
	fout.close();
	//delete tmp;
	//delete a;
	draw(30, 20, "Change score successfully...", 12);
	draw(30, 21, "Press ENTER to RETURN", 14);
	int n = 0;
	n = VK_KEY(n);
	if (n == 100) {
		Sleep(400);
		clear();
		scoreoptionlec();
	}
}

void chooseOptionLec()
{
	ShowConsoleCursor(false);
	safe();
	int n = 1;
	while (1)
	{
		if (n == 1)
		{
			draw(60, 11, "1.View attendence list", 81);
			draw(60, 12, "2.Edit attendence list", 11);
			draw(60, 13, "3.Return", 11);
		}
		if (n == 2) {
			draw(60, 11, "1.View attendence list", 11);
			draw(60, 12, "2.Edit attendence list", 81);
			draw(60, 13, "3.Return", 11);
		}
		if (n == 3) {
			draw(60, 11, "1.View attendence list", 11);
			draw(60, 12, "2.Edit attendence list", 11);
			draw(60, 13, "3.Return", 81);
		}
		n = VK_KEY(n);
		if (n == 101) {
			draw(60, 11, "1.View attendence list", 198);
			Sleep(100);
			draw(60, 11, "1.View attendence list", 118);
			Sleep(100);
			draw(60, 11, "1.View attendence list", 198);
			Sleep(100);
			draw(60, 11, "1.View attendence list", 118);
			clear();
			ViewattendenceLec();
			draw(65, 90, "Press ENTER to RETURN", 14);
			int n = 0;
			n = VK_KEY(n);
			if (n == 100) {
				clear();
				chooseOptionLec();
			}
		}
		if (n == 102) {
			draw(60, 12, "2.Edit attendence list", 198);
			Sleep(100);
			draw(60, 12, "2.Edit attendence list", 118);
			Sleep(100);
			draw(60, 12, "2.Edit attendence list", 198);
			Sleep(100);
			draw(60, 12, "2.Edit attendence list", 118);
			clear();
			EditattendenceLec();
		}
		if (n == 103) {
			draw(60, 13, "3.Return", 198);
			Sleep(100);
			draw(60, 13, "3.Return", 118);
			Sleep(100);
			draw(60, 13, "3.Return", 198);
			Sleep(100);
			draw(60, 13, "3.Return", 118);
			clear();
			lecturemenu();
		}
	}
}
void ViewattendenceLec()
{
	course* cur = nullptr;
	loadcourse("C:/Users/Admin/Desktop/Project/GroupA/Schedule.csv", cur); // /course.csv
	char tenLec[100];
	bool first = true;
	int i = 0;
	ifstream fin1;
	fin1.open("C:/Users/Admin/Desktop/Project/GroupA/menu.txt");
	fin1.get(tenLec, 100);
	fin1.close();
	//xoahamluubienhs("F:/Visual Studio/Student Management System/tenlec.csv");
	course* temp = cur;
	vector<course> vt;
	int i2 = 0;
	while (cur != NULL)
	{
		if (strcmp(tenLec, cur->lecaccount) == 0)
		{
			cout << i2 << ".  class: " << cur->classs << " course:" << cur->ID << endl;
			vt.push_back(*cur);
			i2++;
		}
		cur = cur->pNext;
	}
	if (i2 == 0) {
		cout << "No class available for this teacher" << endl;
		return;
	}
	int choose;
	do
	{
		cout << "choose:(integer)" << endl;
		cin >> choose;
		cin.get();
	} while (choose < 0 || choose >= i2);

	cur = &vt[choose];
	char diachi[100];
	strcpy_s(diachi, "C:/Users/Admin/Desktop/Project/GroupA/");
	strcat_s(diachi, cur->classs);
	char c1[2];
	c1[0] = '_';
	c1[1] = '\0';
	strcat_s(diachi, c1);
	strcat_s(diachi, cur->ID);
	strcat_s(diachi, ".csv");
	ofstream fout("Save.txt");
	fout << diachi << endl;
	fout.close();
	ifstream fin(diachi);
	if (!fin.is_open())
		return;
	char c[100];
	char d[100];
	//bool first = true;
	string b;
	getline(fin, b);
	int x = 0;
	draw(6, 8, "CLASS", 7);
	draw(18, 8, "ID", 7);
	draw(30, 8, "Student's name", 7);
	draw(55, 8, "Week 1", 7);
	draw(65, 8, "Week 2", 7);
	draw(75, 8, "Week 3", 7);
	draw(85, 8, "Week 4", 7);
	while (!fin.eof())
	{
		//if (first == false)
			//fin.ignore();
		int no;
		fin >> no;
		fin.ignore();
		fin.get(c, 100, ',');		//Class
		fin.ignore();
		if (strcmp(c, d) != 0)
			x++;
		strcpy_s(d, c);
		draw(5, 10 + x, c, 7);
		fin.get(c, 100, ',');	//ID student
		fin.ignore();
		draw(15, 10 + x, c, 7);
		fin.get(c, 100, ',');	//Last name
		fin.ignore();
		draw(30, 10 + x, c, 7);
		fin.get(c, 100, ',');	//First name
		fin.ignore();
		cout << " " << c;
		fin.get(c, 100, ',');	//Gender
		fin.ignore();
		fin.get(c, 100, ',');	//DoB
		fin.ignore();
		fin.get(c, 100, ',');	//Ass
		fin.ignore();
		fin.get(c, 100, ',');	//Mid
		fin.ignore();
		fin.get(c, 100, ',');	//Final
		fin.ignore();
		fin.get(c, 100, ',');
		fin.ignore();			//Total

		fin.get(c, 100, ',');	//W1
		fin.ignore();
		if (strcmp(c, "0") == 0)
			draw(55, 10 + x, "   .", 7);
		else if (strcmp(c, "1") == 0)
			draw(55, 10 + x, "   P", 7);
		else if (strcmp(c, "-1") == 0)
			draw(55, 10 + x, "   A", 7);

		//fin.ignore();
		fin.get(c, 100, ',');	//W2
		fin.ignore();
		if (strcmp(c, "0") == 0)
			draw(65, 10 + x, "   .", 7);
		else if (strcmp(c, "1") == 0)
			draw(65, 10 + x, "   P", 7);
		else if (strcmp(c, "-1") == 0)
			draw(65, 10 + x, "   A", 7);

		//fin.ignore();
		fin.get(c, 100, ',');	//W3
		fin.ignore();
		if (strcmp(c, "0") == 0)
			draw(75, 10 + x, "   .", 7);
		else if (strcmp(c, "1") == 0)
			draw(75, 10 + x, "   P", 7);
		else if (strcmp(c, "-1") == 0)
			draw(75, 10 + x, "   A", 7);

		//fin.ignore();
		fin.get(c, 100, '\n');	//W4
		fin.ignore();
		if (strcmp(c, "0") == 0)
			draw(85, 10 + x, "   .", 7);
		else if (strcmp(c, "1") == 0)
			draw(85, 10 + x, "   P", 7);
		else if (strcmp(c, "-1") == 0)
			draw(85, 10 + x, "   A", 7);
		//first = false;
		cout << endl;
		x += 1;
	}
	fin.close();
	draw(65, 10 + x + 3, "A: Absent!", 7);
	draw(65, 10 + x + 4, "P: Present!", 7);
	draw(65, 10 + x + 5, ".: Haven't check-in!", 7);
	draw(65, 10 + x + 10, " ", 7);
	//system("pause");

}

void EditattendenceLec()
{
	//clear();
	draw(19, 6, "View attendence list first: ", 15);
	draw(0, 7, "", 15);
	ViewattendenceLec();
	Class* pHead = nullptr;
	char diachi[100];
	ifstream fout1("Save.txt");
	fout1.getline(diachi, 100);
	fout1.close();
	loadAttendenceCSV(pHead, diachi);
	if (pHead == nullptr)
	{
		cout << "Can't load!" << endl;
		return;
	}
	cout << endl;
	while (1)
	{
		char c[10];
		cout << "Which student do you want to edit check-in, please input student's ID: ";
		cin.get(c, 10, '\n');
		cin.ignore();
		Class* cur = pHead;
		while (cur != nullptr)
		{
			if (strcmp(c, cur->ID) == 0)
			{
				while (1)
				{
					int n;
					cout << "Which week of 4 weeks do you want to edit (Example: 1, 2, 3, 4): ";
					cin >> n;
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
					if (out == 2)
						break;
				}
				break;
			}
			cur = cur->pNext;
		}
		cout << "Do you want to edit other student: " << endl;
		cout << "1.Yes						2.No" << endl;
		int quit;
		cout << "Please choose option: ";
		cin >> quit;
		cin.ignore();
		if (quit == 2)
			break;
	}
	saveAttendenceCSV(pHead);
	clear();
	cout << "			View attendence list after editing: " << endl;
	ViewattendenceLec();
	cout << "PRESS ENTER TO RETURN..." << endl;
	int n = 0;
	n = VK_KEY(n);
	if (n == 100) {
		clear();
		chooseOptionLec();
	}
	//lecturemenu();
}
bool loadAttendenceCSV(Class*& pHead, const char* path)
{
	bool first = true;
	ifstream fin;
	//fin.open("F:/Visual Studio/Student Management System/Save.txt");
	//if (!fin.is_open())
		//return;
	//string subject;
	//getline(fin, subject, '\n');
	//fin.ignore();
	//fin.close();
	fin.open(path);
	if (!fin.is_open())
	{
		cout << "Can't see scoreboard"<< endl;
		return false;
	}
	fin.ignore(1000, '\n');
	Class* cur = nullptr;
	int no = 0;
	while (fin >> no)
	{
		if (pHead == nullptr)
		{
			pHead = new Class;
			cur = pHead;
			//cur->pNext = nullptr;
		}
		else
		{
			while (cur->pNext != NULL) {
				cur = cur->pNext;
			}
			cur->pNext = new Class;
			cur = cur->pNext;
			//cur->pNext = nullptr;
		}
		cur->no = no;
		fin.get();
		
		fin.get(cur->name, 100, ',');	//Class
		fin.ignore();
		fin.get(cur->ID, 100, ',');		//ID
		fin.ignore();
		fin.get(cur->lname, 100, ',');	//Last name
		fin.ignore();
		fin.get(cur->fname, 100, ',');	//First name
		fin.ignore();
		fin.get(cur->dob, 100, ',');	//DoB
		fin.ignore();
		fin.get(cur->gen, 100, ',');	//Gen
		fin.ignore();
		fin >> cur->ass;	//Ass
		fin.ignore();
		fin >> cur->mid;	//Mid
		fin.ignore();
		fin >> cur->final;	//Final
		fin.ignore();
		fin >> cur->total;	//Total
		fin.ignore();

		cur->week1 = new week;
		fin >> cur->week1->check;	//W1
		fin.ignore();

		cur->week2 = new week;
		fin >> cur->week2->check;	//W2
		fin.ignore();
		cur->week3 = new week;
		fin >> cur->week3->check;	//W3
		fin.ignore();

		cur->week4 = new week;
		fin >> cur->week4->check;	//W4
		//fin.ignore();
		first = false;
		cur->pNext = NULL;
		string b;
		getline(fin,b);
	}
	fin.close();
	return true;
}
void saveAttendenceCSV(Class*& pHead)
{
	ifstream fin;
	fin.open("Save.txt");
	if (!fin.is_open())
		return;
	string subject;
	getline(fin, subject, '\n');
	fin.ignore();
	fin.close();
	ofstream fout;
	fout.open(subject);
	if (!fout.is_open())
		return;
	fout << "No,Class,Student ID,Last name,First name,Gender,DoB,Assignment,Midterm,Final,Total,W1,W2,W3,W4" << endl;
	Class* cur = pHead;
	int no = 1;
	while (cur->pNext != nullptr)
	{
		fout << no;
		no++;
		fout << cur->name << "," << cur->ID << "," << cur->lname << "," << cur->fname << "," << cur->gen << "," << cur->dob << ",";
		fout << cur->ass << "," << cur->mid << "," << cur->final << "," << cur->total << ",";
		fout << cur->week1->check << ",";
		fout << cur->week2->check << ",";
		fout << cur->week3->check << ",";
		fout << cur->week4->check << endl;
		cur = cur->pNext;
	}
	fout.close();
}

void saveAttendenceCSV(Class*& pHead, char* path)
{
	ifstream fin;
	fin.open("Save.txt");
	if (!fin.is_open())
		return;
	string subject;
	getline(fin, subject, '\n');
	fin.ignore();
	fin.close();
	ofstream fout;
	fout.open(path);
	if (!fout.is_open())
		return;
	fout << "No,Class,Student ID,Last name,First name,Gender,DoB,Assignment,Midterm,Final,Total,W1,W2,W3,W4" << endl;
	Class* cur = pHead;
	int no = 1;
	while (cur)
	{
		fout << no << ",";
		no++;
		fout << cur->name << "," << cur->ID << "," << cur->lname << "," << cur->fname << "," << cur->gen << "," << cur->dob << ",";
		fout << cur->ass << "," << cur->mid << "," << cur->final << "," << cur->total << ",";
		fout << cur->week1->check << ",";
		fout << cur->week2->check << ",";
		fout << cur->week3->check << ",";
		fout << cur->week4->check << endl;
		cur = cur->pNext;
	}
	fout.close();
}