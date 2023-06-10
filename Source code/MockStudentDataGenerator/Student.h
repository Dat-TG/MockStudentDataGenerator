#pragma once
#include "date.h"
#include "RandomFunction.h"
#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
	string ID;
	string Name;
	double GPA;
	string Phone;
	string Email;
	date Birthday;
	string Address;
public:
	bool Input();
	void Output();
	void GenerateStudent();
	Student();
	double getGPA();
};

