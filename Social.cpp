#include "Social.hpp"
#include "Person.hpp"

void Social::talk(Person person)
{
	S_level = +5;
	cout<<"the social level is:"<<S_level<<endl;
	return;
}

void Social::text(Person person)
{
	S_level = +5;
	cout<<"the social level is:"<<S_level<<endl;
	return;
}

void Social::phonecall(Person person)
{
	S_level = +5;
	cout<<"the social level is:"<<S_level<<endl;
	return;
}

void Social::set_Slevel(int num = -1) {

	if (S_level + num <= 3) {
		cout << "I need to Talk!\n";
		cout << "your social level is: " << S_level;
	}
	if (S_level + num <= 0) {
		S_level = 0;
		return;
	}
	S_level += num;
	cout<<"the social level is:"<<S_level<<endl;
}
Social::~Social()
{
}

