#include "Animal.h"

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

void Animal::eat(Food food)
{
	
}
