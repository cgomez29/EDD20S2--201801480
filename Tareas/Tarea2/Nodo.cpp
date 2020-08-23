#include "Nodo.h"
#include <iostream>
using namespace std;

Nodo::Nodo()
{
	next = nullptr;
	previous = nullptr;
}

Nodo::Nodo(Student student)
{
	this->student = student;
}

Nodo* Nodo::getNext()
{
	return this->next;
}

void Nodo::setNext(Nodo* next)
{
	this->next = next;
}

Nodo* Nodo::getPrevious()
{
	return this->previous;
}

void Nodo::setPrevious(Nodo* previous)
{
	this->previous = previous;
}

Student Nodo::getNodo()
{
	return this->student;
}

Nodo::~Nodo()
{
}