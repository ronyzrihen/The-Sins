#include "Job.h"
#include <string.h>
using namespace std;
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
		salary = 10, 000;
		dailyworkhours = 8;
		return;
	}
	if (strcmp(title, "fireman") == 0)
	{
		title = strcpy(title, title_t);
		salary = 12,000;
		dailyworkhours = 10;
		return;
	}
	if (strcmp(title, "footballer") == 0)
	{
		title = strcpy(title, title_t);
		salary = 15,000;
		dailyworkhours = 8;
		return;
	}
	if (strcmp(title, "actor") == 0)
	{
		title = strcpy(title, title_t);
		salary = 8,000;
		dailyworkhours = 7;
		return;
	}
	if (strcmp(title, "teacher") == 0)
	{
		title = strcpy(title, title_t);
		salary = 7,000;
		dailyworkhours = 8;
		return;
	}
	cout << "not exist";
	return;

}

Job::~Job()
{
	delete[]title;
	return;

}