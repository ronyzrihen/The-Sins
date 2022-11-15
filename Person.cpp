#include "Person.h"
using namespace std;


Person::Person(): job(), needs(){

P_FirstName = NULL;
P_LastName = NULL;
P_money = 20000;
ID = -1;

}
Person::Person(char* name, char* lastname, int id, char* job_name) : job(job_name), ID(id)
{
	if (name == NULL||lastname==NULL)
	{
		cout<< "error";
		return ;
	}

	P_FirstName = new char[sizeof(strlen(name)+1)];
	strcpy(P_FirstName, name);
	P_LastName = new char[sizeof(strlen(lastname)+1)];
	strcpy(lastname, P_LastName);
	
	P_money = 20000;
	
}

Person::~Person()
{
	delete[] P_FirstName;
	delete[] P_LastName;
}