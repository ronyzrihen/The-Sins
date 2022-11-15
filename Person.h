#pragma once
#include <iostream>
#include "Needs.h"
#include "Job.h"

class Person
{
public:
	Person(char*name,char*lastname,int id, char* job_name);
	~Person();
	int get_money() {return P_money; };
	void set_money(int salary) { P_money += salary; };
private:
	int ID;
	char* P_FirstName;
	char* P_LastName;
	int P_money;
	Needs needs;
	Job job;

};

