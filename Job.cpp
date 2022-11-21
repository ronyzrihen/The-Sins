#include "Job.h"
#include <string.h>
using namespace std;
Job::Job(){

title = new char[11];
strcpy(title,"unemployed");
salary = 0;
dailyworkhours = 0;

}
Job::Job(char* title_t)
	:
	title(NULL),
	salary(0),
	dailyworkhours(0)
{
	int flag = 0;
	if (title_t == NULL )
	{
		cout << "error";
		return;
	}

	title = new char[sizeof(strlen(title_t)+1)];
	if (strcmp(title_t, "Policeman") == 0)
	{
		title = strcpy(title, title_t);
		salary = 100;
		dailyworkhours = 8;
		flag++;
		
	}
	if (strcmp(title_t, "Fireman") == 0)
	{
		title = strcpy(title, title_t);
		salary = 120;
		dailyworkhours = 10;
		flag++;
	}
	if (strcmp(title_t, "Footballer") == 0)
	{
		title = strcpy(title, title_t);
		salary = 150;
		dailyworkhours = 8;
		flag++;
	}
	if (strcmp(title_t, "Actor") == 0)
	{
		strcpy(title, title_t);
		salary = 800;
		dailyworkhours = 7;
		flag++;
	}
	if (strcmp(title_t, "Teacher") == 0)
	{
		strcpy(title, title_t);
		salary = 700;
		dailyworkhours = 8;
		flag++;
	}
	if (strcmp(title_t, "Criminal") == 0)
	{
		strcpy(title, title_t);
		salary = 900;
		dailyworkhours = 5;
		flag++;
	}
		
		if(flag == 0){
			 cout << "not exist\n" ;
			 
		}

	

}

Job::~Job()
{
	delete[]title;
	return;

}


void Job::gotowork() {
	cout << "+" << salary << "$\n";
}


void Job::set_title(char* New_name) {
	delete[] title;
	title = new char[sizeof(strlen(New_name)+1)];
	if (title == NULL) {
		cout << "Error";
		return;
	}
	strcpy(title, New_name);


}

void Job::reset(){
	delete[] title;
	salary = 0;
	dailyworkhours = 0;
}