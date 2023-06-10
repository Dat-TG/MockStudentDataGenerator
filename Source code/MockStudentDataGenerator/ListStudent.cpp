#include "ListStudent.h"
#include "Console.h"
void ListStudent::Input()
{
	Student S;
	while (!feof(stdin))
	{
		if (S.Input())
		List.push_back(S);
	}
}
void ListStudent::Output()
{
	for (int i = 0; i < List.size(); i++)
		List[i].Output();
}
void ListStudent::GenerateStudents(int &n)
{
	Student S;
	n = GenerateInt(5, 10);
	for (int i = 0; i < n; i++)
	{
		S.GenerateStudent();
		List.push_back(S);
	}
}
double ListStudent::AvgGPA()
{
	double sum = 0;
	for (int i = 0; i < List.size(); i++)
		sum += List[i].getGPA();
	sum=sum * 1.0 / List.size();
	return round(sum * 100) / 100;
}
void ListStudent::printStudentGreaterGPA()
{
	double AvgGPA = this->AvgGPA();
	cout << "LIST OF STUDENTS WHO HAVE GPA GREATER THAN AVERAGE GPA" << endl;
	TextColor(15);
	int stt = 0;
	for (int i = 0; i < List.size(); i++)
		if (List[i].getGPA() > AvgGPA)
		{
			cout << ++stt << ".";
			List[i].Output();
		}
}
int ListStudent::getSize()
{
	return this->List.size();
}