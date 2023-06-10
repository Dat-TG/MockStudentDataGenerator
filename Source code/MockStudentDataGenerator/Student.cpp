#include "Student.h"
#include "Console.h"
bool Student::Input()
{
	string temp;
	cin >> temp;
	if (temp == "")
	{
		return 0;
	}
	cin >> this->ID;
	cin >> temp;
	getline(cin, this->Name);
	string temp2 = "";
	cin >> temp;
	for (int i=0; i<temp.size();i++)
		if (temp[i] == '=')
		{
			for (int j = i + 1; j < temp.size(); j++)
				if (temp[j]!=',')
				temp2 = temp2 + temp[j];
			break;
		}
	this->GPA = stod(temp2);
	cin >> temp;
	for (int i = 0; i < temp.size(); i++)
		if (temp[i] == '=')
		{
			this->Phone = temp.substr(i + 1, temp.size() - 1 - i);
			break;
		}
	cin >> temp;
	for (int i = 0; i < temp.size(); i++)
		if (temp[i] == '=')
		{
			this->Email = temp.substr(i + 1, temp.size() - 1 - i);
			break;
		}
	cin >> temp;
	for (int i = 0; i < temp.size(); i++)
		if (temp[i] == '=')
			temp2 = temp.substr(i + 1, temp.size() - 1 - i);
	temp = "";
	temp2 = temp2 + '/';
	int a[3] = { 0,0,0 }, m = 0;
	for (int i=0;i<temp2.size();i++)
		if (temp2[i] != '/')
		{
			temp = temp + temp2[i];
		}
		else
		{
			a[m++]=stoi(temp);
			temp = "";
		}
	this->Birthday.setDate(a[0], a[1], a[2]);
	char c = getchar();
	getline(cin, temp);
	for (int i = 0; i < temp.size(); i++)
		if (temp[i] == '=')
			this->Address = temp.substr(i + 1, temp.size() - 1 - i);
	while (this->ID[0] == ' ') this->ID.erase(this->ID.begin());
	while (this->Name[0] == ' ') this->Name.erase(this->Name.begin());
	return 1;
}
void Student::Output()
{
	string space = "   ";
	TextColor(6);
	cout << "Student: ";
	TextColor(7);
	cout<< this->ID << " - " << this->Name << endl;
	TextColor(6);
	cout << space << "GPA=";
	TextColor(7);
	cout << this->GPA;
	TextColor(6);
	cout << ", Telephone=";
	TextColor(7);
	cout<< this->Phone << endl;
	TextColor(6);
	cout << space << "Email=";
	TextColor(7);
	cout<< this->Email << endl;
	TextColor(6);
	cout << space << "DOB=";
	TextColor(7);
	this->Birthday.Output();
	cout << endl;
	TextColor(6);
	cout << space << "Address=";
	TextColor(7);
	cout<< this->Address << endl;
}
void Student::GenerateStudent()
{
	this->Address = AddressRandom();
	this->Birthday = GenerateDate();
	this->ID = IDRandom();
	this->Email = GenerateEmail(this->ID);
	this->Name = NameRandom();
	this->GPA = GenerateDouble(0, 10);
	this->Phone = GeneratePhone();
}
Student::Student()
{
	this->Address = "Tien Giang";
	this->Birthday.setDate(13,10,2002);
	this->Email = "20120454@student.hcmus.edu.vn";
	this->GPA = 10;
	this->ID = "20120454";
	this->Name = "Le Cong Dat";
	this->Phone = "0123-456-789";
}
double Student::getGPA()
{
	return this->GPA;
}