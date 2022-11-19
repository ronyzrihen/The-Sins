#include "Person.hpp"



Person::Person()
	:
	P_job(), 
	P_needs()
{

ID = -1;
P_FirstName = NULL;
P_LastName = NULL;
P_money = 20000;

}
Person::Person(char* name, char* lastname, int id, char* job_name)
	:
	P_job(job_name),
	ID(id),
	P_needs(),
	P_money(20000),
	P_FirstName(NULL),
	P_LastName(NULL)
{
	if (name == NULL||lastname==NULL)
	{
		cout<< "error";
		return ;
	}

	P_FirstName = new char[sizeof(strlen(name)+1)];
	strcpy(P_FirstName, name);
	P_LastName = new char[sizeof(strlen(lastname)+1)];
	strcpy(P_LastName, lastname);
	
	P_money = 20000;
	
}

Person::~Person()
{
	delete[] P_FirstName;
	delete[] P_LastName;
}

void Person::set_Job(Job job) {

	P_job.set_title(job.get_Name());
	P_job.set_salary(job.get_Salary());
	P_job.set_work_hours(job.get_Hours());
}

void Person::set_Fname(char* name){

delete[] P_FirstName;
P_FirstName = new char[sizeof(strlen(name)+1)];
strcpy(P_FirstName,name);
 
}
void Person::set_Lname(char* name){

delete[] P_LastName;
P_LastName = new char[sizeof(strlen(name)+1)];
strcpy(P_LastName,name);
 
}

