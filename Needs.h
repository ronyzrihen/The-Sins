#pragma once
#include <iostream>
#include "Bladder.h"
#include "Hunger.h"
#include "Energy.h"
#include "Fun.h"
#include "Social.hpp"
#include "Hygiene.h"

class Social;
class Needs
{
public:
	Needs();
	~Needs();

	int get_Bladder();
	int get_Hunger();
	int get_Energy();
	int get_Social();
	void set_Bladder();
	void set_Hunger();
	void set_Social();
	void set_Energy();
	void set_fun();
	void set_Hygiene();



private:
	Bladder N_bladder;
	Hunger N_hunger;
	Energy N_energy;
	Social N_social;
	Fun N_fun;
	Hygiene N_hygiene;
	
};


