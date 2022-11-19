
#include "Needs.h"

Needs::Needs() :
	N_bladder(),
	N_hunger(),
	N_energy(),
	N_social()
{
	
}

Needs::~Needs() {



}

int Needs::get_Bladder() {
	return N_bladder.get_Blevel();
}

int Needs::get_Hunger() {

	return N_hunger.get_Hlevel();
}

int Needs::get_Energy() {

	return N_energy.get_Elevel();
}

int Needs::get_Social() {

	return N_social.get_social();
}

