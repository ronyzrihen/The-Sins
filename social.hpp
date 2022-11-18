#pragma once
#include <iostream>
#include "Person.hpp"
class Person;
class Social
{
public:
	Social() { level = 10; };
	~Social();
	void talk(Person person);
	void text(Person person);
	void phonecall(Person person);
	int get_social() { return level; };
private:
	int level;
};


