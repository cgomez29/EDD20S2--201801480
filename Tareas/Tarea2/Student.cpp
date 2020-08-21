#include "Student.h"

Student::Student()
{
	this->idStudent = 0;
	this->name = "";
}

Student::Student(int idStudent, string name)
{
	this->idStudent = idStudent;
	this->name = name;
}

void Student::setIdStudent(int idStudent)
{
	this->idStudent = idStudent;
}

int Student::getIdStudent()
{
	return this->idStudent;
}

void Student::setName(string name)
{
	this->name = name;
}

string Student::getName()
{
	return this->name;
}

Student::~Student()
{}
