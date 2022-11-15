#include "Job.h"
#include <string.h>
using namespace std;
Job::Job(){

title = new char [11];
strcpy(title,"unemployed");
salary = 0;
dailyworkhours = 0;

}
Job::Job(char* title_t)
{
	if (title == NULL )
	{
		cout << "error";
		return;
	}
	title = new char;
	if (strcmp(title, "policeman") == 0)
	{
		title = strcpy(title, title_t);
		salary = 100;
		dailyworkhours = 8;
		return;
	}
	if (strcmp(title, "fireman") == 0)
	{
		title = strcpy(title, title_t);
		salary = 120;
		dailyworkhours = 10;
		return;
	}
	if (strcmp(title, "footballer") == 0)
	{
		title = strcpy(title, title_t);
		salary = 150;
		dailyworkhours = 8;
		return;
	}
	if (strcmp(title, "actor") == 0)
	{
		strcpy(title, title_t);
		salary = 800;
		dailyworkhours = 7;
		return;
	}
	if (strcmp(title, "teacher") == 0)
	{
		strcpy(title, title_t);
		salary = 700;
		dailyworkhours = 8;
		return;
	}
	cout << "not exist";
	return;

}

void Job::gotowork(Person& person) {
	person.set_money(salary);
	
	
}

Job::~Job()
{
	delete[]title;
	return;

}