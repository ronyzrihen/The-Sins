#pragma once
#include <iostream>
#include "Animal.h"
inline void action(int level) {
		if (level + 5 > 10) { 
		level = 10;
		return;
	}
	level += 5;
}
class Fun
{
public:
	Fun()				{ F_level = 10; };
	~Fun()				{};
	void dance()		{ action(F_level); };
	void playguitar()	{ action(F_level); };
	void playcomputer() { action(F_level); };
	void petanimal(	Animal animal);
	void set_Fun(int num);

private:
	int F_level;
};


