#pragma once
#include <iostream>
#include "Food.h"
#define MAX_FRIDGE 6
class Hunger
{
public:
	Hunger() { H_level = 10; };
	~Hunger(){};
	void eat();
	int get_Hlevel() { return H_level; };
	void set_Hunger(int num = -1);
private:
	int H_level;
};

