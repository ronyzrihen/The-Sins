#pragma once
#include <iostream>



class Job
{
private:
	char* title;
	int salary;
	int dailyworkhours;
public:
	void set_title(char* New_name);
	void set_salary(int New_salary) { salary = New_salary; };
	void set_work_hours(int NEW_hours) { dailyworkhours = NEW_hours; };
	void gotowork();
	
	char* get_Name() const { return title; };
	int get_Salary() { return salary; };
	int get_Hours() { return dailyworkhours; };

	Job();
	Job(char* title_t);
	~Job();
};

