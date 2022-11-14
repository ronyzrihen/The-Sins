#include "Energy.h"


using namespace std;

Energy::Energy()
{
	level = 10;
	return;
}

void Energy::sleep()
{
	level = +5;
}

Energy::~Energy() {};