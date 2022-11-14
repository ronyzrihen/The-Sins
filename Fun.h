#pragma once
#include <iostream>
#include "Animal.h"

class Fun
{
public:
	Fun();
	~Fun();
	void dance();
	void playguitar();
	void playcomputer();
	void petanimal(	Animal animal);

private:
	int level;
};

Fun::Fun()
{
}

Fun::~Fun()
{
}
