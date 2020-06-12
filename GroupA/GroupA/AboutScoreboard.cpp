#include"FunctionUsed.h"
#include"Staff.h"
#include"Class.h"
#include"Student.h"

void optionscore() {
	char a4[100];
	draw(30, 4, "What course you want to show scoreboard? (Ex:CS161,...)", 11); //19APCS1 //CS161
	gotoxy(86, 4);
	char clas[100];
	cin.get(a4, 100, '\n');
	cin.get();
	draw(30, 5, "What class you want to show scoreboard? (Ex:19APCS1...)", 11);
	cin.get(clas, 100, '\n');
	cin.ignore();
	course* cur = nullptr;
	loadcourse("C:/Users/Admin/Desktop/Project/GroupA/Schedule.csv", cur);//skejool
	bool first = true;
	int i = 5;
	while (cur != NULL) {
		if (strcmp(a4, cur->ID) == 0) {
			char diachi[100];
			strcpy_s(diachi, "C:/Users/Admin/Desktop/Project/GroupA/");
			strcat_s(diachi, clas);
			char a1[2];
			a1[0] = '_';
			a1[1] = '\0';
			strcat_s(diachi, a1);
			strcat_s(diachi, cur->ID);
			strcat_s(diachi, ".csv");
			Class* a = nullptr;
			loadAttendenceCSV(a, diachi);
			Class* tmp = a;
			while (tmp != NULL) {
				if (first == true)
					draw(3, 5, "Class  Student ID   Last name        First name  Course ID   Assignment  Midterm  Final  Total", 14);
				gotoxy(3, ++i);
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
				tmp = tmp->pNext;
			}
			delete tmp;
			break;
		}
		cur = cur->pNext;
	}
	draw(20, ++i, "Press ENTER to RETURN", 12);
	int n = 0;
	n = VK_KEY(n);
	if (n == 100) {
		Sleep(400);
		clear();
		staffmenu();
		delete cur;
	}
}
