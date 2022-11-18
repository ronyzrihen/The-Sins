#include "Job.h"
#include <string.h>
using namespace std;
Job::Job(){

title = new char ;
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
	if (strcmp(title, "Policeman") == 0)
	{
		title = strcpy(title, title_t);
		salary = 100;
		dailyworkhours = 8;
		return;
	}
	if (strcmp(title, "Fireman") == 0)
	{
		title = strcpy(title, title_t);
		salary = 120;
		dailyworkhours = 10;
		return;
	}
	if (strcmp(title, "Footballer") == 0)
	{
		title = strcpy(title, title_t);
		salary = 150;
		dailyworkhours = 8;
		return;
	}
	if (strcmp(title, "Actor") == 0)
	{
		strcpy(title, title_t);
		salary = 800;
		dailyworkhours = 7;
		return;
	}
	if (strcmp(title, "Teacher") == 0)
	{
		strcpy(title, title_t);
		salary = 700;
		dailyworkhours = 8;
		return;
	}
	if (strcmp(title, "Criminal") == 0)
	{
		strcpy(title, title_t);
		salary = 900;
		dailyworkhours = 5;
		return;
	}
	cout << "not exist";
	return;

}



void Job::gotowork() {
	cout << "+" << salary << "$\n";
}

Job::~Job()
{
	delete[]title;
	return;

}

void Job::set_title(char* New_name) {
	delete[] title;
	title = new char;
	if (title == NULL) {
		cout << "Error";
		return;
	}
	strcpy(title, New_name);


}