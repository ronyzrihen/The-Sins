#pragma once
#include <iostream>
#include <string.h>
using namespace std;
enum havetobecooked
{
	True, False
};

class Food
{
public:
	Food(char* name, int worth = 5);
	~Food() { delete[] F_name; };

public:
	const char* get_name() const;
	void  print_name()		{ cout << F_name; };
	int	  get_worth() const { return F_worth; };
private:
	char* F_name;
	int F_worth;

};

