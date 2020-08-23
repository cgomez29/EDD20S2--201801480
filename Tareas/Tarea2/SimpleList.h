#pragma once
#include "Nodo.h"
#include "Student.h"

class SimpleList
{
public:
	Nodo* head;
	Nodo* tail;

	SimpleList();
	~SimpleList();

	void add(Student student);
	Nodo* search(int idStudent);
	//Nodo* search(string idStudent);
	void delete_student(int idStudent);
	void print();
};

