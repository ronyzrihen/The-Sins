#pragma once
#include <iostream>

class Job
{
public:
	Job(char* title_t);
	~Job();
	void gotowork();

private:
	char* title;
	int salary;
	int dailyworkhours;
};

