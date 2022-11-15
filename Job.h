#pragma once
#include <iostream>
#include "Needs.h"

class Job
{
public:
	Job();
	Job(char* title_t);
	~Job();
	void gotowork(Person& person);
	

private:
	char* title;
	int salary;
	int dailyworkhours;
};

