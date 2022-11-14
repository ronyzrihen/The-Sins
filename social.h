#pragma once
#include <iostream>
#include "Person.h"

class Social
{
public:
	Social();
	~Social();
	void talk(Person person);
	void text(Person person);
	void phonecall(Person person);

private:
	int level;
};


