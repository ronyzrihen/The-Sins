#pragma once
#include <iostream>
using namespace std;
class Hygiene
{
private:
	int H_level;

public:
	Hygiene()  {H_level = 10;};
	~Hygiene() {};
	void shower();
	int get_Hygiene() { return H_level; };
	void set_Hygiene(int num = -1);
};

