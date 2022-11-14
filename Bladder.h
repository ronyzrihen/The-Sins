#pragma once
#include <iostream>
#define MAX 10
class Bladder
{
public:
	Bladder() { B_level = 10; };
	~Bladder()	{};
	void usetoilet();

private:
	int B_level;
};

