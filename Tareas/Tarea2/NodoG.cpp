
#include <iostream>

using namespace std;

template <class T>
class NodoG
{
private:
	NodoG* next;
	NodoG* previous;
	T val;

public:
	NodoG()
	{
		next = nullptr;
		previous = nullptr;
	}

	NodoG(T val)
	{
		this->val = val;
	};

	NodoG* getNext()
	{
		return this->next;
	};

	void NodoG::setNext(NodoG* next)
	{
		this->next = next;
	}

	NodoG* NodoG::getPrevious()
	{
		return this->previous;
	}

	void NodoG::setPrevious(NodoG* previous)
	{
		this->previous = previous;
	}

	T NodoG::getNodo()
	{
		return this->val;
	}
	~NodoG() {};

};

