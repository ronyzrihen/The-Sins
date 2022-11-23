#pragma once
#include <iostream>
#include "Bladder.h"
#include "Hunger.h"
#include "Energy.h"
#include "Fun.h"
#include "Social.hpp"
#include "Hygiene.h"

class Person;
class Social;
class Needs
{
public:
	Needs();
	~Needs();

	int get_Bladder() { return N_bladder.get_Blevel(); };
	int get_Hunger()  { return N_hunger.get_Hlevel(); };
	int get_Energy()  {return N_energy.get_Elevel(); };
	int get_Social()  { return N_social.get_social(); };
	int get_Hygiene() { return N_hygiene.get_Hygiene(); };
	int get_Fun() 	  {return N_fun.get_fun();};

	void decrese_needs();
	void reset_needs();
	void select_Bladder();
	void select_Hunger();
	void select_Social(Person& person, int num);
	void select_Energy();
	void select_fun();
	void select_Hygiene();



private:
	Bladder N_bladder;
	Hunger N_hunger;
	Energy N_energy;
	Social N_social;
	Fun N_fun;
	Hygiene N_hygiene;
	
};



