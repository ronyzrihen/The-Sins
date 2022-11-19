#include "Animal.h"
Animal::Animal() {

	A_name = NULL;
	A_kind = NULL;

}

Animal::Animal(char* name, char* kind)
{
	A_name = new char[sizeof(strlen(name) + 1)];
	strcpy(A_name, name);

	A_kind = new char[sizeof(strlen(kind) + 1)];
	strcpy(A_kind, kind);
}

Animal::~Animal()
{
	delete[] A_name;
	delete[] A_kind;
}

void Animal::eat()
{
	cout << "NOM NOM NOM\n";
}

void Animal::set_name(char* name) {

	delete[] A_name;
	A_name = new char;
	strcpy(A_name, name);

}

void Animal::set_kind(char* kind) {

	delete[] A_kind;
	A_kind = new char;
	strcpy(A_kind, kind);
	
}