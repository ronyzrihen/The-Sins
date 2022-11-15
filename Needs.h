#pragma once
#include <iostream>
#include "Bladder.h"
#include "Hunger.h"
#include "Energy.h"
#include "Fun.h"
#include "social.h"


class Needs
{
public:
	Needs();
	~Needs();

	int get_Bladder();
	int get_Hunger();
	int get_Energy();
	int get_Social();



private:
	Bladder N_bladder;
	Hunger N_hunger;
	Energy N_energy;
	Social N_social;
	
};


