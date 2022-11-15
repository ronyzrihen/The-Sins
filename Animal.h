#pragma once
#include <iostream>
#include <string.h>
#include "Food.h"
class Animal
{
private:
	char* A_name;
	char* A_kind;
	

public:
	Animal(char* name, char* kind);
	~Animal();
	void eat();
};

