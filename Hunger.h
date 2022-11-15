#pragma once
#include <iostream>
#include "Food.h"

class Hunger
{
public:
	Hunger() { H_level = 10; };
	~Hunger(){};
	void eat(Food* fridge);
	int get_Hlevel();
private:
	int H_level;
};

