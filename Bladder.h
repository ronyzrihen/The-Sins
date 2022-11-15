#pragma once
#include <iostream>
#define MAX 10
class Bladder
{
public:
	Bladder() { B_level = 10; };
	~Bladder()	{};
	void usetoilet();
	int get_Blevel() { return B_level; };
	void set_Blevel(int num = -1);
private:
	int B_level;
};

