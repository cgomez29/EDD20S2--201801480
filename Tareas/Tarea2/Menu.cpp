#include "Menu.h"
#include "SimpleList.h"
#include "Student.h"
#include <iostream>
using namespace std;

void Menu::menuPricipal()
{
	SimpleList* list = new SimpleList();
	SimpleList* clone = new SimpleList();
	string name = "";
	int idStudent = 0;
	int espera = 0;
	int opcion = 0;
	do {
		system("cls");
		cout << "Lista enlazada simple" << endl;
		cout << "1. agregar" << endl;
		cout << "2. buscar" << endl;
		cout << "3. eliminar" << endl;
		cout << "4. imprimir lista" << endl;
		cout << "5. clonar" << endl;
		cout << "6. Ver clone" << endl;
		cout << "7 salir" << endl;
		cout << ">> ";
		cin >> opcion;

		switch (opcion)
		{
		case 1:
		{
			system("cls");
			cout << "AGREGAR ESTUDIANTE" << endl;
			Student *student = new Student();
			cout << "Ingrese carnet" << endl;
			cout << ">> ";
			cin >> idStudent;
			cout << "Ingrese nombre" << endl;
			cout << ">> ";
			cin >> name;
			student->setIdStudent(idStudent);
			student->setName(name);
			list->add(*student);
			break;
		}
		case 2:
		{
			system("cls");
			cout << "BUSCAR ESTUDIANTE" << endl;
			cout << "Ingrese carnet" << endl;
			cout << ">> ";
			cin >> idStudent;
			Student searching = list->search(idStudent)->getNodo();
			cout << "Nombre: " << searching.getName() << endl;
			cin >> espera;

			break;
		}
		case 3:
		{
			system("cls");
			cout << "ELIMINAR ESTUDIANTE" << endl;
			cout << "Ingrese carnet" << endl;
			cout << ">> ";
			cin >> idStudent;
			list->delete_student(idStudent);
			break;
		}
		case 4:
		{
			system("cls");
			cout << "  ----------------" << endl;
			list->print();
			cout << "  ----------------" << endl;
			cin >> espera;

			break;
		}
		case 5:
		{
			//CLONAR
			Nodo* aux = list->head;
			while (aux != nullptr)
			{
				clone->add(aux->getNext()->getNodo());	
				aux = aux->getNext();
			}
			cout << "Clonación terminada" << endl;
			cin >> espera;
			break;		
		}
		case 6:
		{
			system("cls");
			cout << "  ----------------" << endl;
			clone->print();
			cout << "  ----------------" << endl;
			cin >> espera;
			break;
		}	
		case 7:
		{
			break;
		}
		}
	} while (opcion != 5);
	//delete clone;
	delete list;
}