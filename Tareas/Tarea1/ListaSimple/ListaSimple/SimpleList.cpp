#include "SimpleList.h"
#include "Nodo.h"
#include "Student.h"
#include <iostream>
using namespace std;

SimpleList::SimpleList()
{
	head = nullptr;
	tail = nullptr;
}

void SimpleList::add(Student student) 
{
	Nodo* newNodo;
	newNodo = new Nodo(student);

	if (head == nullptr)
	{
		newNodo->setNext(nullptr);
		head = newNodo;
		tail = newNodo;
	}
	else
	{
		tail->setNext(newNodo);
		tail = newNodo;
	}
}

Nodo* SimpleList::search(int idStudent)
{
	Nodo* aux = this->head;

	while (aux != nullptr)
	{
		if (aux->getNodo().getIdStudent() == idStudent)
		{
			return aux;
		}
		aux = aux->getNext();
	}

	return nullptr;
}

void SimpleList::delete_student(int idStudent)
{
	Nodo* aux = this->head;
	Nodo* previo = nullptr;

	if (aux != nullptr)
	{
		while (aux != nullptr)
		{
			if (aux->getNodo().getIdStudent() == idStudent)
			{	
				if (aux == this->head && aux->getNext() == nullptr)
				{
					this->head = nullptr;
					this->tail = nullptr;
					break;
				}

				previo->setNext(aux->getNext());

				if (aux == this->head)
				{
					this->head = aux->getNext();
					break;
				}
				else if (aux == this->tail)
				{
					this->tail = previo;
					break;
				}
			}
			previo = aux;
			aux = aux->getNext();
		}
	}
	else
	{
		cout << "No hay elementos!!" << endl;
	}
	delete aux;
}

void SimpleList::print()
{
	Nodo* aux = this->head;
	while (aux != nullptr)
	{
		cout << "Carnet: " << aux->getNodo().getIdStudent()
			<< " Nombre: " << aux->getNodo().getName() << endl;
		aux = aux->getNext();
	}
}

SimpleList::~SimpleList() {}