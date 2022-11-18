#pragma once
#include <iostream>
#include "Needs.h"
#include "Job.h"


class Social;
class Person
{
public:
	Person();
	Person(char* name,char* lastname,int id, char* job_name);
	~Person();
	int get_money() {return P_money; };
	void set_money(int salary) { P_money += salary; };
	const char* get_name() { return P_FirstName; };
	int get_ID() { return ID; };
	void set_ID(int num) { ID = num; };
	void set_Job(Job job);
 private:
	int ID;
	char* P_FirstName;
	char* P_LastName;
	int P_money;
	Needs needs;
	Job P_job;

};

