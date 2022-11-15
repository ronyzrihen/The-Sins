#include "Person.h"
using namespace std;

Person::Person(char* name, char* lastname, int id, char* job_name) : job(job_name)
{
	if (name == NULL||lastname==NULL||id==NULL)
	{
		cout<< "error";
		return ;
	}
	P_FirstName = name;
	P_LastName = lastname;
	ID = id;
	P_money = 20000;
	
}

Person::~Person()
{
}