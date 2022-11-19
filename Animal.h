#pragma once
#include <iostream>
#include <cstring>
#include "Food.h"
class Animal
{
private:
	char* A_name;
	char* A_kind;
	

public:
	Animal();
	Animal(char* name, char* kind);
	~Animal();
	char* get_name() const { return A_name; };
	char* get_kind() const { return A_kind; };
	
	void set_name(char* name);
	void set_kind(char* kind);
	void eat();
};

