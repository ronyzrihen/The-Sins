#pragma once
#include <iostream>
#include <string.h>
using namespace std;
typedef enum havetobecooked 
{
	False,True
}cooked;

class Food
{
public:
	Food(char* name, cooked tocook = False, int worth = 5);
	~Food() { delete[] F_name; };

public:
	void cook_food()		{F_cooked = True; };
	const char* get_name()  { return F_name; };
	void  print_name()		{ cout << F_name; };
	int	  get_worth() const { return F_worth; };
private:
	char* F_name;
	int F_worth;
	cooked F_cooked;
};

