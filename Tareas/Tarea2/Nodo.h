#pragma once
#include "Student.h"


using namespace std;

class Nodo
{
private:
	Nodo* next;
	Nodo* previous;
	Student student;
public:
	Nodo();
	Nodo(Student student);
	~Nodo();
	Nodo* getNext();
	void setNext(Nodo* next);
	Nodo* getPrevious();
	void setPrevious(Nodo* previous);
	Student getNodo();
};

