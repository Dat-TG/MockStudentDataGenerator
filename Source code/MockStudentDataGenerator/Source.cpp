#define _CRT_SECURE_NO_WARNINGS
#include "ListStudent.h"
#include "RandomFunction.h"
#include "Console.h"
int main()
{
	srand((unsigned int)time(NULL));
	resizeConsole(1000, 800);
	FixConsoleWindow();
	int x = 35, y = 5, w = 60, l = 10;
	Frames(x, y, w, l);
	gotoxy(x+(w-x)/2, y+1);
	TextColor(11);
	cout << "PROJECT MOCK STUDENT DATA GENERATOR";
	gotoxy(x + (w - x) / 2, y + 2);
	cout << "Object Oriented Programming - 20_1/3";
	gotoxy(x + (w - x) / 2, y + 3);
	cout << "Student: 20120454-Le Cong Dat";

	freopen("students.txt", "rt", stdin);
	ListStudent L;
	L.Input();
	freopen("con", "rt", stdin);
	cin.clear();
	freopen("students.txt", "wt", stdout);
	int n = 0;
	L.GenerateStudents(n);
	L.Output();
	freopen("con", "wt", stdout);
	cout.clear();
	TextColor(15);
	gotoxy(x + (w - x) / 2, y + 7);
	cout << "The list is saved in file students.txt" << endl;
	gotoxy(x + (w - x) / 2-10, y + 8);
	cout << "* " << n << " students have been generated and added to the list *" << endl;
	gotoxy(x + (w - x) / 2, y + 9);
	cout << "The list now have " << L.getSize() << " students" << endl;
	gotoxy(x + (w - x) / 2, y + 10);
	TextColor(14);
	cout << "Average GPA: ";
	TextColor(15);
	cout<< L.AvgGPA() << endl;
	gotoxy(x, y + l + 2);
	TextColor(10);
	L.printStudentGreaterGPA();
	system("pause");
	return 0;
}