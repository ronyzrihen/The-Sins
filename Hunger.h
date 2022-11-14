#pragma once
#include <iostream>
#include "Food.h"

class Hunger
{
public:
	Hunger();
	~Hunger();
	void eat(Food food);

private:
	int level;
};

Hunger::Hunger()
{
}

Hunger::~Hunger()
{
}
