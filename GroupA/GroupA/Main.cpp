#include"FunctionUsed.h"
#include"Lecture.h"
#include"Staff.h"
#include"Student.h"
int main() {
	//loadALLtxtTocsv();
	//loadALLcsvTotxt();
	menu();
	//return 0;
	//lecturemenu();test thu
}

void loadALLcsvTotxt()
{
	//CSVloadtoTXT("F:/Project/All Class Save.csv", "F:/Project/All Class Save.txt");
	//CSVloadtoTXT("F:/Project/AllClass.csv", "F:/Project/AllClass.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/19APCS1.csv", "C:/Users/Admin/Desktop/Project/GroupA/19APCS1.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/19APCS1_CS161.csv", "C:/Users/Admin/Desktop/Project/GroupA/19APCS1_CS161.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/19APCS1_MTH251.csv", "C:/Users/Admin/Desktop/Project/GroupA/19APCS1_MTH251.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/19APCS1_Schedule.csv", "C:/Users/Admin/Desktop/Project/GroupA/19APCS1_Schedule.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/19APCS2.csv", "C:/Users/Admin/Desktop/Project/GroupA/19APCS2.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/19APCS2_CS161.csv", "C:/Users/Admin/Desktop/Project/GroupA/19APCS2_CS161.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/19APCS2_MTH251.csv", "C:/Users/Admin/Desktop/Project/GroupA/19APCS2_MTH251.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/19APCS2_Schedule.csv", "C:/Users/Admin/Desktop/Project/GroupA/19APCS2_Schedule.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/Class.csv", "C:/Users/Admin/Desktop/Project/GroupA/Class.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/Lecturer.csv", "C:/Users/Admin/Desktop/Project/GroupA/Lecturer.txt");
	//CSVloadtoTXT("F:/Visual Studio/Student Management System/Schedule.csv", "F:/Visual Studio/Student Management System/Schedule.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/Staff.csv", "C:/Users/Admin/Desktop/Project/GroupA/Staff.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/Student.csv", "C:/Users/Admin/Desktop/Project/GroupA/Student.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/Student_19APCS1.csv", "C:/Users/Admin/Desktop/Project/GroupA/Student_19APCS1.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/Student_19APCS2.csv", "C:/Users/Admin/Desktop/Project/GroupA/Student_19APCS2.txt");
}

void CSVloadtoTXT(const char* CSV, const char* TXT)
{
	ifstream fin;
	ofstream fout;
	fin.open(CSV);
	fout.open(TXT);
	string c;
	while (!fin.eof())
	{
		getline(fin, c, '\n');
		fout << c << endl;
	}
	fin.close();
	fout.close();
}
void TXTloadtoCSV(const char* TXT, const char* CSV) {
	ifstream fin;
	ofstream fout;
	fin.open(CSV);
	fout.open(TXT);
	string c;
	while (!fin.eof())
	{
		getline(fin, c, '\n');
		fout << c << endl;
	}
	fin.close();
	fout.close();
}
void loadALLtxtTocsv()
{
	//CSVloadtoTXT("F:/Project/All Class Save.csv", "F:/Project/All Class Save.txt");
	//CSVloadtoTXT("F:/Project/AllClass.csv", "F:/Project/AllClass.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/19APCS1.csv", "C:/Users/Admin/Desktop/Project/GroupA/19APCS1.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/19APCS1_CS161.csv", "C:/Users/Admin/Desktop/Project/GroupA/19APCS1_CS161.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/19APCS1_MTH251.csv", "C:/Users/Admin/Desktop/Project/GroupA/19APCS1_MTH251.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/19APCS1_Schedule.csv", "C:/Users/Admin/Desktop/Project/GroupA/19APCS1_Schedule.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/19APCS2.csv", "C:/Users/Admin/Desktop/Project/GroupA/19APCS2.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/19APCS2_CS161.csv", "C:/Users/Admin/Desktop/Project/GroupA/19APCS2_CS161.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/19APCS2_MTH251.csv", "C:/Users/Admin/Desktop/Project/GroupA/19APCS2_MTH251.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/19APCS2_Schedule.csv", "C:/Users/Admin/Desktop/Project/GroupA/19APCS2_Schedule.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/Class.csv", "C:/Users/Admin/Desktop/Project/GroupA/Class.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/Lecturer.csv", "C:/Users/Admin/Desktop/Project/GroupA/Lecturer.txt");
	//CSVloadtoTXT("F:/Visual Studio/Student Management System/Schedule.csv", "F:/Visual Studio/Student Management System/Schedule.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/Staff.csv", "C:/Users/Admin/Desktop/Project/GroupA/Staff.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/Student.csv", "C:/Users/Admin/Desktop/Project/GroupA/Student.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/Student_19APCS1.csv", "C:/Users/Admin/Desktop/Project/GroupA/Student_19APCS1.txt");
	CSVloadtoTXT("C:/Users/Admin/Desktop/Project/GroupA/Student_19APCS2.csv", "C:/Users/Admin/Desktop/Project/GroupA/Student_19APCS2.txt");
}