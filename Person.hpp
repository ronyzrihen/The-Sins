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

	int get_money() 			{return P_money; };
	const char* get_Fname() 			{ return P_FirstName; };
	const char* get_Lname() 			{ return P_LastName; };
	int get_ID() 				{ return ID; };
	char* get_job() 			{return P_job.get_Name();};
	
	void set_money(int salary) 	{ P_money += salary; };
	void set_ID(int num) 		{ ID = num; };
	void set_Job(Job job);
	void set_Fname(char* name);
	void set_Lname(char* name);

 private:

	int ID;
	char* P_FirstName;
	char* P_LastName;
	int P_money;
	Needs needs;
	Job P_job;

};
