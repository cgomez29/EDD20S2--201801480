#pragma once

#include <string>

using namespace std;

class Student
{
private:
	int idStudent; //carnet
	string name;
public:
	Student();
	Student(int idStudent, string name);
	~Student();
	void setIdStudent(int idStudent);
	int getIdStudent();
	void setName(string name);
	string getName();
};

