#include "Person.h"
using namespace std;

Person::Person(char* name, char* lastname, int id)
{
	if (name == NULL||lastname==NULL||id==NULL)
	{
		cout<< "error";
		return ;
	}
	FirstName = name;
	LastName = lastname;
	ID = id;
	money = 20000;
	Job 
}

Person::~Person()
{
}