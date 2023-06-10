#pragma once
#include "Student.h"
#include "RandomFunction.h"
#include <vector>
class ListStudent
{
private:
	vector<Student> List;
public:
	void Input();
	void Output();
	void GenerateStudents(int &n);
	double AvgGPA();
	void printStudentGreaterGPA();
	int getSize();
};

