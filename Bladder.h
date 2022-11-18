#pragma once
#include <iostream>
#define MAX 10
using namespace std;
class Bladder
{
public:
	Bladder() { B_level = 10; };
	~Bladder()	{};
	void usetoilet();
	int get_Blevel() { return B_level; };
	void set_Blevel(int num);
private:
	int B_level;
	

};

