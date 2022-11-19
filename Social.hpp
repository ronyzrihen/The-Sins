#pragma once
#include <iostream>


class Person;
class Social
{
public:
	Social() { S_level = 10; };
	~Social();
	void talk(Person person);
	void text(Person person);
	void phonecall(Person person);
	int get_social() { return S_level; };
	void set_Slevel(int num );

private:
	int S_level;
};


