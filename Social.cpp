#include "social.h"

Social::Social()
{
	level = 10;
}

void Social::talk(Person person)
{
	level = +5;
	return;
}

void Social::text(Person person)
{
	level = +5;
	return;
}

void Social::phonecall(Person person)
{
	level = +5;
	return;
}


Social::~Social()
{
}

