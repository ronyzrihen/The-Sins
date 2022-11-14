#pragma once
#include <iostream>
#include "Needs.h"
#include "Job.h"

class Person
{
public:
	Person(char*name,char*lastname,int id);
	~Person();

private:
	int ID;
	char* FirstName;
	char* LastName;
	int money;
	Needs needs;
	Job job;
};

