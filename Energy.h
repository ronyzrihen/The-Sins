#pragma once
#include <iostream>


class Energy
{
private:
	int E_level;

public:
	Energy()  { E_level = 10; };
	~Energy() {};
	void sleep();
	int get_Elevel() { return E_level; };
	void set_Elevel(int num = -1);
};

