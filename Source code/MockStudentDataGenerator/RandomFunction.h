#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "date.h"
using namespace std;
int GenerateInt(int minN, int maxN);
string NameRandom();
string IDRandom();
string AddressRandom();
int numberofDaysInMonth(int Thang, int Nam);
date GenerateDate();
string GenerateEmail(string MSSV);
double GenerateDouble(double min, double max);
string GeneratePhone();